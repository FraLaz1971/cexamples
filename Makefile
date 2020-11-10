CC=gcc -g -O2
SRC = $(wildcard src/*.c)
OBJ = obj/*.o obj/*.obj
CPPFLAGS = -Iinclude
LDFLAGS = -Llib -lm
TARGET0 = 2darray
TARGET1 = 2darrayfun
TARGET2 = analysis
TARGET3 = averageof3
TARGET4 = callex
TARGET5 = callval
TARGET6 = charme
TARGET7 = charstats
TARGET8 = color
TARGET9 = countlines
TARGET10 = crash1
TARGET11 = dumpfunc
TARGET12 = dynamic1
TARGET13 = forreal
TARGET14 = insults
TARGET15 = largest
TARGET16 = literals
TARGET17 = madlib
TARGET18 = main
TARGET19 = parsefile
TARGET20 = random_num_list
TARGET21 = readdynamic
TARGET22 = readfile
TARGET23 = readfilelines
TARGET24 = scandir
TARGET25 = scanfile
TARGET26 = scanning2
TARGET27 = scanning
TARGET28 = showchars
TARGET29 = simplecolor
TARGET30 = structures
TARGET31 = teststrigvec
TARGET32 = testtable
TARGET33 = ui
TARGET34 = wc
TARGET35 = words2lines
TARGETS = words2lines wc ui testtable teststrigvec structures simplecolor showchars scanning scanning2 scanfile scandir readfilelines readfile readdynamic random_num_list parsefile main madlib literals largest insults forreal dynamic1 dumpfunc crash1 countlines color charstats charme callval callex averageof3 analysis 2darrayfun 2darray
all: $(TARGETS)
obj/$(TARGET0).o: src/2darray.c
	$(CC) -c   $< -o obj/2darray.o $(CPPFLAGS)
$(TARGET0): obj/2darray.o
	$(CC) -o 2darray $< $(LDFLAGS)
obj/$(TARGET1).o: src/2darrayfun.c
	$(CC) -c   $< -o obj/2darrayfun.o $(CPPFLAGS)
$(TARGET1): obj/2darrayfun.o
	$(CC) -o 2darrayfun $< $(LDFLAGS)
obj/$(TARGET2).o: src/analysis.c
	$(CC) -c   $< -o obj/analysis.o $(CPPFLAGS)
analysis:
obj/$(TARGET3).o: src/averageof3.c
	$(CC) -c   $< -o obj/averageof3.o $(CPPFLAGS)
$(TARGET3): obj/averageof3.o
	$(CC) -o averageof3 $< $(LDFLAGS)
obj/$(TARGET4).o: src/callex.c
	$(CC) -c   $< -o obj/callex.o $(CPPFLAGS)
$(TARGET4): obj/callex.o
	$(CC) -o callex $< $(LDFLAGS)
obj/$(TARGET5).o: src/callval.c
	$(CC) -c   $< -o obj/callval.o $(CPPFLAGS)
$(TARGET5): obj/callval.o
	$(CC) -o callval $< $(LDFLAGS)
obj/$(TARGET6).o: src/charme.c
	$(CC) -c   $< -o obj/charme.o $(CPPFLAGS)
$(TARGET6): obj/charme.o
	$(CC) -o charme $< $(LDFLAGS)
obj/$(TARGET7).o: src/charstats.c
	$(CC) -c   $< -o obj/charstats.o $(CPPFLAGS)
$(TARGET7): obj/charstats.o
	$(CC) -o charstats $< $(LDFLAGS)
obj/$(TARGET8).o: src/color.c
	$(CC) -c   $< -o obj/color.o $(CPPFLAGS)
$(TARGET8): obj/color.o
	$(CC) -o color $< $(LDFLAGS)
obj/$(TARGET9).o: src/countlines.c
	$(CC) -c   $< -o obj/countlines.o $(CPPFLAGS)
$(TARGET9): obj/countlines.o
	$(CC) -o countlines $< $(LDFLAGS)
obj/$(TARGET10).o: src/crash1.c
	$(CC) -c   $< -o obj/crash1.o $(CPPFLAGS)
$(TARGET10): obj/crash1.o
	$(CC) -o crash1 $< $(LDFLAGS)
obj/$(TARGET11).o: src/dumpfunc.c
	$(CC) -c   $< -o obj/dumpfunc.o $(CPPFLAGS)
$(TARGET11): obj/dumpfunc.o
	$(CC) -o dumpfunc $< $(LDFLAGS)
obj/$(TARGET12).o: src/dynamic1.c
	$(CC) -c   $< -o obj/dynamic1.o $(CPPFLAGS)
$(TARGET12): obj/dynamic1.o
	$(CC) -o dynamic1 $< $(LDFLAGS)
obj/$(TARGET13).o: src/forreal.c
	$(CC) -c   $< -o obj/forreal.o $(CPPFLAGS)
$(TARGET13): obj/forreal.o
	$(CC) -o forreal $< $(LDFLAGS)
obj/$(TARGET14).o: src/insults.c
	$(CC) -c   $< -o obj/insults.o $(CPPFLAGS)
$(TARGET14): obj/insults.o
	$(CC) -o insults $< $(LDFLAGS)
obj/$(TARGET15).o: src/largest.c
	$(CC) -c   $< -o obj/largest.o $(CPPFLAGS)
$(TARGET15): obj/largest.o
	$(CC) -o largest $< $(LDFLAGS)
obj/$(TARGET16).o: src/literals.c
	$(CC) -c   $< -o obj/literals.o $(CPPFLAGS)
$(TARGET16): obj/literals.o
	$(CC) -o literals $< $(LDFLAGS)
obj/$(TARGET17).o: src/madlib.c
	$(CC) -c   $< -o obj/madlib.o $(CPPFLAGS)
$(TARGET17): obj/madlib.o
	$(CC) -o madlib $< $(LDFLAGS)
obj/$(TARGET18).o: src/main.c
	$(CC) -c   $< -o obj/main.o $(CPPFLAGS)
$(TARGET18): obj/main.o
	$(CC) -o main $< $(LDFLAGS)
obj/$(TARGET19).o: src/parsefile.c
	$(CC) -c   $< -o obj/parsefile.o $(CPPFLAGS)
$(TARGET19): obj/parsefile.o
	$(CC) -o parsefile $< $(LDFLAGS)
obj/$(TARGET20).o: src/random_num_list.c
	$(CC) -c   $< -o obj/random_num_list.o $(CPPFLAGS)
$(TARGET20): obj/random_num_list.o
	$(CC) -o random_num_list $< $(LDFLAGS)
obj/$(TARGET21).o: src/readdynamic.c
	$(CC) -c   $< -o obj/readdynamic.o $(CPPFLAGS)
$(TARGET21): obj/readdynamic.o
	$(CC) -o readdynamic $< $(LDFLAGS)
obj/$(TARGET22).o: src/readfile.c
	$(CC) -c   $< -o obj/readfile.o $(CPPFLAGS)
$(TARGET22): obj/readfile.o
	$(CC) -o readfile $< $(LDFLAGS)
obj/$(TARGET23).o: src/readfilelines.c
	$(CC) -c   $< -o obj/readfilelines.o $(CPPFLAGS)
$(TARGET23): obj/readfilelines.o
	$(CC) -o readfilelines $< $(LDFLAGS)
obj/$(TARGET24).o: src/scandir.c
	$(CC) -c   $< -o obj/scandir.o $(CPPFLAGS)
$(TARGET24): obj/scandir.o
	$(CC) -o scandir $< $(LDFLAGS)
obj/$(TARGET25).o: src/scanfile.c
	$(CC) -c   $< -o obj/scanfile.o $(CPPFLAGS)
$(TARGET25): obj/scanfile.o
	$(CC) -o scanfile $< $(LDFLAGS)
obj/$(TARGET26).o: src/scanning2.c
	$(CC) -c   $< -o obj/scanning2.o $(CPPFLAGS)
$(TARGET26): obj/scanning2.o
	$(CC) -o scanning2 $< $(LDFLAGS)
obj/$(TARGET27).o: src/scanning.c
	$(CC) -c   $< -o obj/scanning.o $(CPPFLAGS)
$(TARGET27): obj/scanning.o
	$(CC) -o scanning $< $(LDFLAGS)
obj/$(TARGET28).o: src/showchars.c
	$(CC) -c   $< -o obj/showchars.o $(CPPFLAGS)
$(TARGET28): obj/showchars.o
	$(CC) -o showchars $< $(LDFLAGS)
obj/$(TARGET29).o: src/simplecolor.c
	$(CC) -c   $< -o obj/simplecolor.o $(CPPFLAGS)
$(TARGET29): obj/simplecolor.o
	$(CC) -o simplecolor $< $(LDFLAGS)
obj/$(TARGET30).o: src/structures.c
	$(CC) -c   $< -o obj/structures.o $(CPPFLAGS)
$(TARGET30): obj/structures.o
	$(CC) -o structures $< $(LDFLAGS)
obj/$(TARGET31).o: src/teststrigvec.c
	$(CC) -c   $< -o obj/teststrigvec.o $(CPPFLAGS)
$(TARGET31): obj/teststrigvec.o
	$(CC) -o teststrigvec $< $(LDFLAGS)
obj/$(TARGET32).o: src/testtable.c
	$(CC) -c   $< -o obj/testtable.o $(CPPFLAGS)
$(TARGET32): obj/testtable.o
	$(CC) -o testtable $< $(LDFLAGS)
obj/$(TARGET33).o: src/ui.c
	$(CC) -c   $< -o obj/ui.o $(CPPFLAGS)
$(TARGET33): obj/ui.o
	$(CC) -o ui $< $(LDFLAGS)
obj/$(TARGET34).o: src/wc.c
	$(CC) -c   $< -o obj/wc.o $(CPPFLAGS)
$(TARGET34): obj/wc.o
	$(CC) -o wc $< $(LDFLAGS)
obj/$(TARGET35).o: src/words2lines.c
	$(CC) -c   $< -o obj/words2lines.o $(CPPFLAGS)
$(TARGET35): obj/words2lines.o
	$(CC) -o words2lines $< $(LDFLAGS)
install: all
	mv $(TARGETS) bin
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGETS)
distclean: clean
	rm -f bin/* Makefile
