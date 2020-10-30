CC=gcc -g -O2
SRC = $(wildcard src/*.c)
OBJ = obj/*.o obj/*.obj
CPPFLAGS = -Iinclude
LDFLAGS = -Llib -lm
TARGET0 = analysis
TARGET1 = averageof3
TARGET2 = charstats
TARGET3 = color
TARGET4 = countlines
TARGET5 = crash1
TARGET6 = dynamic1
TARGET7 = literals
TARGET8 = madlib
TARGET9 = main
TARGET10 = parsefile
TARGET11 = random_num_list
TARGET12 = readdynamic
TARGET13 = readfile
TARGET14 = readfilelines
TARGET15 = teststrigvec
TARGET16 = testtable
TARGET17 = wc
TARGET18 = words2lines
TARGETS = words2lines wc testtable teststrigvec readfilelines readfile readdynamic random_num_list parsefile main madlib literals dynamic1 crash1 countlines color charstats averageof3 analysis
all: $(TARGETS)
obj/$(TARGET0).o: src/analysis.c
	$(CC) -c   $< -o obj/analysis.o $(CPPFLAGS)
analysis:
obj/$(TARGET1).o: src/averageof3.c
	$(CC) -c   $< -o obj/averageof3.o $(CPPFLAGS)
$(TARGET1): obj/averageof3.o
	$(CC) -o averageof3 $< $(LDFLAGS)
obj/$(TARGET2).o: src/charstats.c
	$(CC) -c   $< -o obj/charstats.o $(CPPFLAGS)
$(TARGET2): obj/charstats.o
	$(CC) -o charstats $< $(LDFLAGS)
obj/$(TARGET3).o: src/color.c
	$(CC) -c   $< -o obj/color.o $(CPPFLAGS)
$(TARGET3): obj/color.o
	$(CC) -o color $< $(LDFLAGS)
obj/$(TARGET4).o: src/countlines.c
	$(CC) -c   $< -o obj/countlines.o $(CPPFLAGS)
$(TARGET4): obj/countlines.o
	$(CC) -o countlines $< $(LDFLAGS)
obj/$(TARGET5).o: src/crash1.c
	$(CC) -c   $< -o obj/crash1.o $(CPPFLAGS)
$(TARGET5): obj/crash1.o
	$(CC) -o crash1 $< $(LDFLAGS)
obj/$(TARGET6).o: src/dynamic1.c
	$(CC) -c   $< -o obj/dynamic1.o $(CPPFLAGS)
$(TARGET6): obj/dynamic1.o
	$(CC) -o dynamic1 $< $(LDFLAGS)
obj/$(TARGET7).o: src/literals.c
	$(CC) -c   $< -o obj/literals.o $(CPPFLAGS)
$(TARGET7): obj/literals.o
	$(CC) -o literals $< $(LDFLAGS)
obj/$(TARGET8).o: src/madlib.c
	$(CC) -c   $< -o obj/madlib.o $(CPPFLAGS)
$(TARGET8): obj/madlib.o
	$(CC) -o madlib $< $(LDFLAGS)
obj/$(TARGET9).o: src/main.c
	$(CC) -c   $< -o obj/main.o $(CPPFLAGS)
$(TARGET9): obj/main.o
	$(CC) -o main $< $(LDFLAGS)
obj/$(TARGET10).o: src/parsefile.c
	$(CC) -c   $< -o obj/parsefile.o $(CPPFLAGS)
$(TARGET10): obj/parsefile.o
	$(CC) -o parsefile $< $(LDFLAGS)
obj/$(TARGET11).o: src/random_num_list.c
	$(CC) -c   $< -o obj/random_num_list.o $(CPPFLAGS)
$(TARGET11): obj/random_num_list.o
	$(CC) -o random_num_list $< $(LDFLAGS)
obj/$(TARGET12).o: src/readdynamic.c
	$(CC) -c   $< -o obj/readdynamic.o $(CPPFLAGS)
$(TARGET12): obj/readdynamic.o
	$(CC) -o readdynamic $< $(LDFLAGS)
obj/$(TARGET13).o: src/readfile.c
	$(CC) -c   $< -o obj/readfile.o $(CPPFLAGS)
$(TARGET13): obj/readfile.o
	$(CC) -o readfile $< $(LDFLAGS)
obj/$(TARGET14).o: src/readfilelines.c
	$(CC) -c   $< -o obj/readfilelines.o $(CPPFLAGS)
$(TARGET14): obj/readfilelines.o
	$(CC) -o readfilelines $< $(LDFLAGS)
obj/$(TARGET15).o: src/teststrigvec.c
	$(CC) -c   $< -o obj/teststrigvec.o $(CPPFLAGS)
$(TARGET15): obj/teststrigvec.o
	$(CC) -o teststrigvec $< $(LDFLAGS)
obj/$(TARGET16).o: src/testtable.c
	$(CC) -c   $< -o obj/testtable.o $(CPPFLAGS)
$(TARGET16): obj/testtable.o
	$(CC) -o testtable $< $(LDFLAGS)
obj/$(TARGET17).o: src/wc.c
	$(CC) -c   $< -o obj/wc.o $(CPPFLAGS)
$(TARGET17): obj/wc.o
	$(CC) -o wc $< $(LDFLAGS)
obj/$(TARGET18).o: src/words2lines.c
	$(CC) -c   $< -o obj/words2lines.o $(CPPFLAGS)
$(TARGET18): obj/words2lines.o
	$(CC) -o words2lines $< $(LDFLAGS)
install: all
	mv $(TARGETS) bin
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGETS)
distclean: clean
	rm -f bin/* Makefile
