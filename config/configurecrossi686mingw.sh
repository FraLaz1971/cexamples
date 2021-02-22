#/usr/bin/env bash
echo "generating total makefile for $(uname) $OS ..." >/dev/stderr
a=0;t=0;TARGETS="";RMTARGETS="";EEXT=".exe";OEXT=".o";RM="rm -f"
echo 'CC=i686-w64-mingw32-gcc -g -O2'
echo 'MAKE = mingw32-make'
echo 'MAKEFILE = Makefile.mingw'
echo 'EEXT = .exe'
echo 'OEXT = .o'
echo 'SRC = $(wildcard src/*.c)'
echo "OBJ = src/*.o"
echo 'CPPFLAGS = -Isrc'
echo 'LIBS = -lm'
echo 'LDFLAGS = -L.'
echo 'RM = rm -f'
for t in $(ls -1 src/*.c)
do
	TARGET=$(basename ${t%.*})
	echo 'TARGET'$a = $TARGET
	TARGETS="$TARGET $TARGETS"
	RMTARGETS="src/$TARGET$EEXT $RMTARGETS"
	a=$(($a+1)) 
done
echo 'TARGETS' = $TARGETS
echo 'RMTARGETS' = $RMTARGETS 
echo 'all: $(TARGETS)'
a=0
for s in $(ls -1 src/*.c)
do
	TARGET=$(basename ${s%.*})
	if [[ ( $TARGET != "useanalysis" ) && ( $TARGET != "analysis" ) ]]
	then
        echo '$(TARGET'$a').o: src/'$TARGET'.c'
        echo -e "\t"'$(CC) -c   $< -o src/'$TARGET'$(OEXT) $(CPPFLAGS)'
		echo '$(TARGET'$a'): src/'$TARGET'.o'
		echo -e "\t"'$(CC) $< $(LIBS) -o src/'$TARGET'$(EEXT) $(LDFLAGS)'
	fi
	a=$(($a+1)) 
done
#create build rules for multiple file target(s)
echo 'analysis.o: src/analysis.c src/analysis.h src/defines.h'
echo -e "\t"'$(CC) -c   $< -o src/analysis$(OEXT) $(CPPFLAGS)'
echo 'useanalysis: src/useanalysis.o src/analysis.o'
echo -e "\t"'$(CC) $? $(LIBS) -o src/'analysis$EEXT' $(LDFLAGS)'
echo 'analysis: useanalysis'
echo 'echo created all targets' >/dev/stderr
echo 'install: all'
echo -e '\tmv $(TARGETS) bin'
echo '.PHONY: clean distclean useanalysis cleananalysis cleanuseanalysis analysis'
echo 'cleananalysis:'
echo -e "\t"'$(RM) src/analysis.o src/useanalysis.o src/analysis.exe'
echo 'cleanuseanalysis: cleananalysis'
echo 'clean: cleananalysis'
echo -e "\t"'$(RM) $(OBJ) $(RMTARGETS)'
echo 'distclean: clean'
echo -e "\t"'$(RM) bin/* Makefile* *.fit *.fits *.csv *.ssv *.tsv *.dat *.txt *.log'
echo "generating dirs" >/dev/stderr
if ! test -d bin; then mkdir  bin; fi
