#/usr/bin/env bash
echo "generating total makefile for $(uname) $OS ..." >/dev/stderr
a=0;t=0;TARGETS="";RMTARGETS="";EEXT=".exe";OEXT=".o"
echo 'CC=i686-w64-mingw32-gcc -g -O2'
echo 'MAKE = mingw32-make'
echo 'MAKEFILE = Makefile.mingw'
echo 'EEXT = .exe'
echo 'OEXT = .o'
echo 'SRC = $(wildcard src/*.c)'
echo "OBJ = src/*.o"
echo 'CPPFLAGS = -Iinclude -Isrc -I/src/fun'
echo 'LIBS = src/fun/libfun.a'
echo 'LDFLAGS = -lm'
for t in $(ls -1 src/*.c)
do
	TARGET=$(basename ${t%.*})
	echo 'TARGET'$a = $TARGET
	TARGETS="$TARGET $TARGETS"
	RMTARGETS="src/$TARGET$EEXT $RMTARGETS"
	a=$(($a+1)) 
done
echo 'TARGETS' = $TARGETS
echo 'RMTARGETS' = $RMTARGETS src/fun/libfun.a
echo 'all: libfun $(TARGETS)'
echo '#creating libfun'
echo 'libfun: src/fun/functions.o'
echo -e "\t"'cd src/fun && $(MAKE) -f $(MAKEFILE)'
echo 'cleanlibfun:'
echo -e "\t"'cd src/fun && $(MAKE) -f $(MAKEFILE) clean'
a=0
for s in $(ls -1 src/*.c)
do
	TARGET=$(basename ${s%.*})
	echo '$(TARGET'$a').o: src/'$TARGET'.c'
	echo -e "\t"'$(CC) -c   $< -o src/'$TARGET'.o $(CPPFLAGS)'
	if [[ $TARGET != "src/analysis" ]]
	then
		echo '$(TARGET'$a'): src/'$TARGET'.o'
		echo -e "\t"'$(CC) $< $(LIBS) -o src/'$TARGET' $(LDFLAGS)'
	else
		echo 'src/analysis.o:'
		echo -e "\t"'$(CC) $< $(LIBS) -o src/'analysis' $(LDFLAGS)'
	fi
	a=$(($a+1)) 
done
echo 'echo created all targets' >/dev/stderr
echo 'install: all'
echo -e '\tmv $(TARGETS) bin'
echo '.PHONY: clean distclean cleanlibfun'
echo 'clean: cleanlibfun'
echo -e "\t"'rm -f $(OBJ) $(RMTARGETS)'
echo 'distclean: clean'
echo -e "\trm -f bin/* Makefile* *.fit *.fits *.csv *.ssv *.tsv *.dat *.txt *.log"
echo "generating dirs" >/dev/stderr
if ! test -d bin; then mkdir  bin; fi
