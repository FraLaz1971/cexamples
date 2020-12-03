#/usr/bin/env bash
echo "generating total makefile ..." >/dev/stderr
a=0;t=0;TARGETS=
echo 'CC=gcc -g -O2'
echo 'SRC = $(wildcard *.c)'
echo "OBJ = *.o *.obj"
echo 'CPPFLAGS = -Iinclude'
echo 'LDFLAGS = -Llib -lm'

for t in $(ls -1 *.c)
do
	TARGET=$(basename ${t%.*})
	echo 'TARGET'$a = $TARGET
	TARGETS="$TARGET $TARGETS"
	a=$(($a+1)) 
done
	echo 'TARGETS' = $TARGETS
	echo 'all: $(TARGETS)'
a=0
for s in $(ls -1 *.c)
do
	TARGET=$(basename ${s%.*})
	echo '$(TARGET'$a').o: '$TARGET'.c'
	echo -e "\t"'$(CC) -c   $< -o '$TARGET'.o $(CPPFLAGS)'
	if [[ $TARGET != "analysis" ]]
	then
		echo '$(TARGET'$a'): '$TARGET'.o'
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
mkdir  bin
