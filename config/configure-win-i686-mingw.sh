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
    if [[ ( $TARGET != "useanalysis" ) && ( $TARGET != "analysis" ) ]]
	then
        RMTARGETS="src/$TARGET$EEXT $RMTARGETS"
	fi
	a=$(($a+1)) 
done
echo 'TARGETS' = $TARGETS
echo 'RMTARGETS' = $RMTARGETS 
echo '.PHONY: all $(TARGETS) clean distclean install'
echo 'all: $(TARGETS)'
a=0
for s in $(ls -1 src/*.c)
do
	TARGET=$(basename ${s%.*})
	if [[ ( $TARGET != "useanalysis" ) && ( $TARGET != "analysis" ) ]]
	then
	    echo '$(TARGET'$a')$(OEXT): src/$(TARGET'$a').c'
            echo -e "\t"'$(CC)  $(CPPFLAGS) -c  $<  -o src/$(TARGET'$a')$(OEXT)'
            echo 'src/$(TARGET'$a')$(EEXT): src/$(TARGET'$a')$(OEXT)'
            echo -e "\t"'$(CC) $< -o src/$(TARGET'$a')$(EEXT) $(LDFLAGS) $(LIBS)'
	    echo '$(TARGET'$a'): src/$(TARGET'$a')$(OEXT) src/$(TARGET'$a')$(EEXT)'
	fi
	a=$(($a+1)) 
done
#create build rules for multiple file target(s)
echo 'src/analysis$(OEXT): src/analysis.c src/analysis.h src/defines.h'
echo -e "\t"'$(CC) -c   $< -o src/analysis$(OEXT) $(CPPFLAGS)'
echo 'src/useanalysis$(EEXT): src/useanalysis.o src/analysis.o'
echo -e "\t"'$(CC) $? $(LIBS) -o src/'analysis$EEXT' $(LDFLAGS)'
echo 'useanalysis: src/useanalysis$(EEXT)'
echo 'analysis: useanalysis'
echo 'echo created all targets' >/dev/stderr
echo 'install: all analysis'
echo -e '\tmv $(RMTARGETS) bin'
echo '.PHONY: clean distclean useanalysis cleananalysis cleanuseanalysis analysis'
echo 'cleananalysis:'
echo -e "\t"'$(RM) src/analysis.o src/useanalysis.o src/analysis.exe'
echo 'useanalysis: src/useanalysis$(EEXT)'
echo 'cleanuseanalysis: cleananalysis'
echo 'clean: cleananalysis'
echo -e "\t"'$(RM) $(OBJ) $(RMTARGETS)'
echo 'distclean: clean'
echo -e "\t"'$(RM) bin/* Makefile* *.fit *.fits *.csv *.ssv *.tsv *.dat *.txt *.log'
echo "generating dirs" >/dev/stderr
if ! test -d bin; then mkdir  bin; fi
