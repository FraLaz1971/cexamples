CC=gcc -g -O2
SRC = $(wildcard src/*.c)
OBJ = obj/*.o obj/*.obj
CPPFLAGS = -Iinclude
LDFLAGS = -Llib -lm
TARGET0 = averageof3
TARGET1 = literals
TARGET2 = random_num_list
TARGET3 = readfile
TARGET4 = readfilelines
TARGETS = readfilelines readfile random_num_list literals averageof3
all: $(TARGETS)
obj/$(TARGET0).o: src/averageof3.c
	$(CC) -c   $< -o obj/averageof3.o $(CPPFLAGS)
$(TARGET0): obj/averageof3.o
	$(CC) -o averageof3 $< $(LDFLAGS)
obj/$(TARGET1).o: src/literals.c
	$(CC) -c   $< -o obj/literals.o $(CPPFLAGS)
$(TARGET1): obj/literals.o
	$(CC) -o literals $< $(LDFLAGS)
obj/$(TARGET2).o: src/random_num_list.c
	$(CC) -c   $< -o obj/random_num_list.o $(CPPFLAGS)
$(TARGET2): obj/random_num_list.o
	$(CC) -o random_num_list $< $(LDFLAGS)
obj/$(TARGET3).o: src/readfile.c
	$(CC) -c   $< -o obj/readfile.o $(CPPFLAGS)
$(TARGET3): obj/readfile.o
	$(CC) -o readfile $< $(LDFLAGS)
obj/$(TARGET4).o: src/readfilelines.c
	$(CC) -c   $< -o obj/readfilelines.o $(CPPFLAGS)
$(TARGET4): obj/readfilelines.o
	$(CC) -o readfilelines $< $(LDFLAGS)
install: all
	mv $(TARGETS) bin
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGETS)
distclean: clean
	rm -f bin/* Makefile
