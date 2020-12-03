#/usr/bin/env bash
echo "generating total makefile for $(uname) $OS ..." >/dev/stderr
a=0;t=0;TARGETS="";RMTARGETS=""; EEXT=".exe";OEXT=".o"
echo 'CC=x86_64-w64-mingw32-gcc -g '
echo 'LD=x86_64-w64-mingw32-gcc '
echo 'CXX  = x86_64-w64-mingw32-g++ -g '
echo 'CXXFLAGS = '
echo 'CFLAGS = '
echo 'RM = rm -f'
echo 'MV = mv '
echo 'CP = cp '
echo 'MAKE = make'
echo 'SRC = $(wildcard src/*.c)'
echo "OBJ = src/*.o"
echo 'CPPFLAGS = -Isrc'
echo 'LIBS = '
echo 'LDFLAGS = -lm'
echo 'EEXT=.exe'
echo 'OEXT=.o'

for t in $(ls -1 src/*.c)
do
	TARGET=$(basename ${t%.*})
	echo 'TARGET'$a = $TARGET
	TARGETS="$TARGET $TARGETS"
	RMTARGETS="$TARGET$EEXT $RMTARGETS"
	a=$(($a+1))
done
echo 'TARGETS' = $TARGETS
echo 'RMTARGETS' = $RMTARGETS
echo 'all: $(RMTARGETS)'
a=0
for s in $(ls -1 src/*.c)
do
	TARGET=$(basename ${s%.*})
        if [[ $TARGET != "analysis" && $TARGET != "useanalysis" ]]
        then
                echo '$(TARGET'$a')$(EEXT): $(TARGET)'
                echo -e "\t"'$(CC) $(CPPFLAGS) src/$(TARGET'$a').c  -o '$TARGET$EEXT' $(LDFLAGS)'
        else
                if [[ $TARGET == "useanalysis" ]]
                then
                        echo 'analysis$(EEXT): useanalysis.exe'
                        echo -e "\t"'$(CP) useanalysis$(EEXT) analysis$(EEXT)'
                        echo 'obj/analysis$(OEXT): src/analysis.c'
                        echo -e "\t"'$(CC)  $(CPPFLAGS) -c src/analysis.c   -o obj/analysis.o '
                        echo 'obj/$(TARGET'$a')$(OEXT): src/useanalysis.c'
                        echo -e "\t"'$(CC)  $(CPPFLAGS) -c src/$(TARGET'$a').c  -o  obj/'$TARGET'.o '
                        echo '$(TARGET'$a')$(EEXT): obj/analysis$(OEXT) obj/$(TARGET'$a')$(OEXT)'
                        echo -e "\t"'$(LD) obj/$(TARGET'$a')$(OEXT) obj/analysis$(OEXT) -o '$TARGET'$(EEXT) $(LDFLAGS)'
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
