#/usr/bin/env bash
echo "generating total makefile ..." >/dev/stderr
a=0;t=0;TARGETS=
echo 'CC=i686-w64-mingw32-gcc -g -O2'
echo 'SRC = $(wildcard src/*.c)'
echo "OBJ = obj/*.o obj/*.obj"
echo 'CPPFLAGS = -Iinclude'
echo 'LDFLAGS = -Llib -lm'

for t in $(ls -1 src/*.c)
do
	TARGET=$(basename ${t%.*})
	echo 'TARGET'$a = $TARGET
	TARGETS="$TARGET $TARGETS"
	a=$(($a+1)) 
done
	echo 'TARGETS' = $TARGETS
	echo 'all: $(TARGETS)'
a=0
for s in $(ls -1 src/*.c)
do
	TARGET=$(basename ${s%.*})
	echo 'obj/$(TARGET'$a').o: src/'$TARGET'.c'
	echo -e "\t"'$(CC) -c   $< -o obj/'$TARGET'.o $(CPPFLAGS)'
	if [[ $TARGET != "analysis" ]]
	then
		echo '$(TARGET'$a'): obj/'$TARGET'.o'
		echo -e "\t"'$(CC) -o '$TARGET' $< $(LDFLAGS)'
	else
		echo 'analysis:'
	fi
	a=$(($a+1)) 
done
	echo 'echo created all targets' >/dev/stderr
	echo 'install: all'
        echo -e '\tmv $(TARGETS) bin'
	echo '.PHONY: clean'
	echo 'clean:'
	echo -e "\t"'rm -f $(OBJ) $(TARGETS)'
	echo 'distclean: clean'
        echo -e "\trm -f bin/* Makefile"
echo "generating dirs" >/dev/stderr
if ! test -d bin; then mkdir  bin; fi
if ! test -d obj; then mkdir obj; fi
