#/usr/bin/env bash
echo "generating total makefile for $(uname) $OS ..." >/dev/stderr
a=0;t=0;TARGETS="";RMTARGETS=""; EEXT=".exe";OEXT=".o"
echo 'CC=gcc -g '
echo 'LD=gcc '
echo 'MAKE = make'
echo 'SRC = $(wildcard src/*.c)'
echo "OBJ = src/*.o"
echo 'CPPFLAGS = -Isrc'
echo 'LIBS = '
echo 'LDFLAGS = -lm'
echo 'EEXT='
echo 'OEXT=.o'

for t in $(ls -1 src/*.c)
do
	TARGET=$(basename ${t%.*})
	echo 'TARGET'$a = $TARGET
	TARGETS="$TARGET $TARGETS"
	RMTARGETS="src/$TARGET $RMTARGETS"
	a=$(($a+1))
done
echo 'TARGETS' = $TARGETS
echo 'RMTARGETS' = $RMTARGETS
echo 'all: $(TARGETS)'
a=0
for s in $(ls -1 src/*.c)
do
	TARGET=$(basename ${s%.*})

	echo 'obj/$(TARGET'$a')$(OEXT): src/$(TARGET'$a')'.c
	echo -e "\t"'$(CC) -c  $< -o obj/'$TARGET'.o $(CPPFLAGS)'
        if [[ $TARGET != "analysis" && $TARGET != "useanalysis"  ]]
        then
                echo '$(TARGET'$a'): obj/'$TARGET'$(OEXT)'
                echo -e "\t"'$(CC) -o '$TARGET'$(EEXT) $< $(LDFLAGS)'
        else
                if [[ $TARGET == "useanalysis" ]]
                then
                        echo 'analysis$(EEXT):'
	                echo -e "\t"
                        echo 'obj/analysis$(OEXT):'
                        echo -e "\t"'$(CC) $(CPPFLAGS) src/analysis.c  -c  -o src/analysis.o $(CPPFLAGS)'
                        echo 'obj/$(TARGET'$a')$(OEXT):'
                        echo -e "\t"'$(CC) $(CPPFLAGS) src/$(TARGET'$a').c  -c  '$TARGET'.o $(CPPFLAGS)'
                        echo '$(TARGET'$a')$(EEXT): obj/analysis$(OEXT) obj/$(TARGET'$a')$(OEXT)'
                        echo -e "\t"'$(LD) obj/$(TARGET'$a')$(OEXT) obj/analysis$(OEXT)  -o '$TARGET'$(EEXT) $(LDFLAGS)'
                fi

        fi
	a=$(($a+1)) 
done
echo 'echo created all targets' >/dev/stderr
echo 'install: all'
echo -e '\tmv $(TARGETS) bin'
echo '.PHONY: clean distclean '
echo 'clean: '
echo -e "\t"'rm -f $(OBJ) $(RMTARGETS)'
echo 'distclean: clean'
echo -e "\trm -f bin/* Makefile* *.fit *.fits *.csv *.ssv *.tsv *.dat *.txt *.log"
echo "generating dirs" >/dev/stderr
if ! test -d bin; then mkdir  bin; fi
if ! test -d obj; then mkdir  obj; fi
