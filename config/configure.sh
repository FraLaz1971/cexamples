#/usr/bin/env bash
echo "generating total makefile for $(uname) $OS ..." >/dev/stderr
a=0;t=0;TARGETS="";RMTARGETS=""; EEXT="";OEXT=".o"
echo 'CC=gcc -g '
echo 'LD=gcc '
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
echo 'EEXT='
echo 'OEXT=.o'

for t in $(ls -1 src/*.c)
do
	TARGET=$(basename ${t%.*})
	echo 'TARGET'$a = $TARGET
	TARGETS="$TARGET $TARGETS"
	if [[ ( $TARGET != "useanalysis" ) && ($TARGET != "useanalysis") ]]
	then
        RMTARGETS="src/$TARGET$EEXT $RMTARGETS"
	fi
	a=$(($a+1))
done
echo 'TARGETS' = $TARGETS
echo 'RMTARGETS' = $RMTARGETS
echo 'all: $(TARGETS) analysis'
a=0
for s in $(ls -1 src/*.c)
do
	TARGET=$(basename ${s%.*})
        if [[ ($TARGET != "analysis") && ($TARGET != "useanalysis") ]]
        then
                echo 'src/$(TARGET'$a')$(EEXT): src/$(TARGET'$a')'.c
                echo -e "\t"'$(CC) $(CPPFLAGS) src/$(TARGET'$a').c  -o src/'$TARGET$EEXT' $(LDFLAGS)'
                echo '$(TARGET'$a'): src/$(TARGET'$a')$(EEXT)'
        fi
	a=$(($a+1)) 
done
#handle multifile targets
echo 'src/analysis$(OEXT): src/analysis.c src/analysis.h src/defines.h'
echo -e "\t"'$(CC)  $(CPPFLAGS) -c src/analysis.c   -o src/analysis$(OEXT) '
echo 'src/useanalysis$(OEXT): src/useanalysis.c src/analysis.h src/defines.h '
echo -e "\t"'$(CC)  $(CPPFLAGS) -c src/useanalysis.c  -o  src/useanalysis$(OEXT) '
echo 'src/useanalysis$(EEXT): src/analysis$(OEXT) src/useanalysis$(OEXT)'
echo -e "\t"'$(LD) $? -o src/analysis$(EEXT) $(LDFLAGS)'
echo 'useanalysis: src/useanalysis$(EEXT)'
echo 'analysis: useanalysis'
echo 'echo created all targets' >/dev/stderr
echo 'install: all'
echo -e '\tmv $(RMTARGETS) bin'
echo '.PHONY: clean distclean '
echo 'clean: '
echo -e "\t"'rm -f $(OBJ) $(RMTARGETS)'
echo 'distclean: clean'
echo -e "\trm -f bin/* Makefile* *.fit *.fits *.csv *.ssv *.tsv *.dat *.txt *.log"
echo "generating dirs" >/dev/stderr
if ! test -d bin; then mkdir  bin; fi
if ! test -d obj; then mkdir  obj; fi
