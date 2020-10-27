CC=gcc -g -O2
SRC = $(wildcard src/*.c)
OBJ = obj/*.o obj/*.obj
CPPFLAGS = -Iinclude
LDFLAGS = -Llib -lm
TARGET0 = averageof3
TARGET1 = literals
TARGET2 = main
TARGET3 = parsefile
TARGET4 = random_num_list
TARGET5 = readfile
TARGET6 = readfilelines
TARGET7 = teststrigvec
TARGET8 = testtable
TARGETS = testtable teststrigvec readfilelines readfile random_num_list parsefile main literals averageof3
all: $(TARGETS)
obj/$(TARGET0).o: src/averageof3.c
	$(CC) -c   $< -o obj/averageof3.o $(CPPFLAGS)
$(TARGET0): obj/averageof3.o
	$(CC) -o averageof3 $< $(LDFLAGS)
obj/$(TARGET1).o: src/literals.c
	$(CC) -c   $< -o obj/literals.o $(CPPFLAGS)
$(TARGET1): obj/literals.o
	$(CC) -o literals $< $(LDFLAGS)
obj/$(TARGET2).o: src/main.c
	$(CC) -c   $< -o obj/main.o $(CPPFLAGS)
$(TARGET2): obj/main.o
	$(CC) -o main $< $(LDFLAGS)
obj/$(TARGET3).o: src/parsefile.c
	$(CC) -c   $< -o obj/parsefile.o $(CPPFLAGS)
$(TARGET3): obj/parsefile.o
	$(CC) -o parsefile $< $(LDFLAGS)
obj/$(TARGET4).o: src/random_num_list.c
	$(CC) -c   $< -o obj/random_num_list.o $(CPPFLAGS)
$(TARGET4): obj/random_num_list.o
	$(CC) -o random_num_list $< $(LDFLAGS)
obj/$(TARGET5).o: src/readfile.c
	$(CC) -c   $< -o obj/readfile.o $(CPPFLAGS)
$(TARGET5): obj/readfile.o
	$(CC) -o readfile $< $(LDFLAGS)
obj/$(TARGET6).o: src/readfilelines.c
	$(CC) -c   $< -o obj/readfilelines.o $(CPPFLAGS)
$(TARGET6): obj/readfilelines.o
	$(CC) -o readfilelines $< $(LDFLAGS)
obj/$(TARGET7).o: src/teststrigvec.c
	$(CC) -c   $< -o obj/teststrigvec.o $(CPPFLAGS)
$(TARGET7): obj/teststrigvec.o
	$(CC) -o teststrigvec $< $(LDFLAGS)
obj/$(TARGET8).o: src/testtable.c
	$(CC) -c   $< -o obj/testtable.o $(CPPFLAGS)
$(TARGET8): obj/testtable.o
	$(CC) -o testtable $< $(LDFLAGS)
install: all
	mv $(TARGETS) bin
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGETS)
distclean: clean
	rm -f bin/* Makefile
