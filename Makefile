CC=gcc -g -O2
SRC = $(wildcard src/*.c)
OBJ = obj/*.o obj/*.obj
CPPFLAGS = -Iinclude
LDFLAGS = -Llib -lm
TARGET0 = analysis
TARGET1 = averageof3
TARGET2 = color
TARGET3 = dynamic1
TARGET4 = literals
TARGET5 = madlib
TARGET6 = main
TARGET7 = parsefile
TARGET8 = random_num_list
TARGET9 = readdynamic
TARGET10 = readfile
TARGET11 = readfilelines
TARGET12 = teststrigvec
TARGET13 = testtable
TARGETS = testtable teststrigvec readfilelines readfile readdynamic random_num_list parsefile main madlib literals dynamic1 color averageof3 analysis
all: $(TARGETS)
obj/$(TARGET0).o: src/analysis.c
	$(CC) -c   $< -o obj/analysis.o $(CPPFLAGS)
analysis:
obj/$(TARGET1).o: src/averageof3.c
	$(CC) -c   $< -o obj/averageof3.o $(CPPFLAGS)
$(TARGET1): obj/averageof3.o
	$(CC) -o averageof3 $< $(LDFLAGS)
obj/$(TARGET2).o: src/color.c
	$(CC) -c   $< -o obj/color.o $(CPPFLAGS)
$(TARGET2): obj/color.o
	$(CC) -o color $< $(LDFLAGS)
obj/$(TARGET3).o: src/dynamic1.c
	$(CC) -c   $< -o obj/dynamic1.o $(CPPFLAGS)
$(TARGET3): obj/dynamic1.o
	$(CC) -o dynamic1 $< $(LDFLAGS)
obj/$(TARGET4).o: src/literals.c
	$(CC) -c   $< -o obj/literals.o $(CPPFLAGS)
$(TARGET4): obj/literals.o
	$(CC) -o literals $< $(LDFLAGS)
obj/$(TARGET5).o: src/madlib.c
	$(CC) -c   $< -o obj/madlib.o $(CPPFLAGS)
$(TARGET5): obj/madlib.o
	$(CC) -o madlib $< $(LDFLAGS)
obj/$(TARGET6).o: src/main.c
	$(CC) -c   $< -o obj/main.o $(CPPFLAGS)
$(TARGET6): obj/main.o
	$(CC) -o main $< $(LDFLAGS)
obj/$(TARGET7).o: src/parsefile.c
	$(CC) -c   $< -o obj/parsefile.o $(CPPFLAGS)
$(TARGET7): obj/parsefile.o
	$(CC) -o parsefile $< $(LDFLAGS)
obj/$(TARGET8).o: src/random_num_list.c
	$(CC) -c   $< -o obj/random_num_list.o $(CPPFLAGS)
$(TARGET8): obj/random_num_list.o
	$(CC) -o random_num_list $< $(LDFLAGS)
obj/$(TARGET9).o: src/readdynamic.c
	$(CC) -c   $< -o obj/readdynamic.o $(CPPFLAGS)
$(TARGET9): obj/readdynamic.o
	$(CC) -o readdynamic $< $(LDFLAGS)
obj/$(TARGET10).o: src/readfile.c
	$(CC) -c   $< -o obj/readfile.o $(CPPFLAGS)
$(TARGET10): obj/readfile.o
	$(CC) -o readfile $< $(LDFLAGS)
obj/$(TARGET11).o: src/readfilelines.c
	$(CC) -c   $< -o obj/readfilelines.o $(CPPFLAGS)
$(TARGET11): obj/readfilelines.o
	$(CC) -o readfilelines $< $(LDFLAGS)
obj/$(TARGET12).o: src/teststrigvec.c
	$(CC) -c   $< -o obj/teststrigvec.o $(CPPFLAGS)
$(TARGET12): obj/teststrigvec.o
	$(CC) -o teststrigvec $< $(LDFLAGS)
obj/$(TARGET13).o: src/testtable.c
	$(CC) -c   $< -o obj/testtable.o $(CPPFLAGS)
$(TARGET13): obj/testtable.o
	$(CC) -o testtable $< $(LDFLAGS)
install: all
	mv $(TARGETS) bin
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGETS)
distclean: clean
	rm -f bin/* Makefile
