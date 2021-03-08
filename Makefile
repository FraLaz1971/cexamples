CC=gcc -g 
LD=gcc 
CXXFLAGS = 
CFLAGS = 
RM = rm -f
MV = mv 
CP = cp 
MAKE = make
SRC = $(wildcard src/*.c)
OBJ = src/*.o
CPPFLAGS = -Isrc
LIBS = 
LDFLAGS = -lm
EEXT=
OEXT=.o
TARGET0 = 2darray
TARGET1 = 2darrayfun
TARGET2 = AllyGally
TARGET3 = analysis
TARGET4 = ansi
TARGET5 = ascii
TARGET6 = assessed
TARGET7 = assignstring
TARGET8 = averageof3
TARGET9 = blowup1
TARGET10 = blowup2
TARGET11 = blowup3
TARGET12 = blowupvc
TARGET13 = bomber
TARGET14 = bonus
TARGET15 = callex
TARGET16 = callval
TARGET17 = charloop
TARGET18 = charme
TARGET19 = charred
TARGET20 = charstats
TARGET21 = color
TARGET22 = continue
TARGET23 = countdwn
TARGET24 = countlines
TARGET25 = couplenames
TARGET26 = crash1
TARGET27 = dentist
TARGET28 = dumpfunc
TARGET29 = duo
TARGET30 = dynamic1
TARGET31 = favkey1
TARGET32 = fibonacci
TARGET33 = first
TARGET34 = forreal
TARGET35 = genie1
TARGET36 = genie2
TARGET37 = genie3
TARGET38 = genie
TARGET39 = greater
TARGET40 = greater-orig
TARGET41 = height
TARGET42 = hellof
TARGET43 = hellomsf
TARGET44 = htest
TARGET45 = hundred
TARGET46 = insult2
TARGET47 = insult3
TARGET48 = insults
TARGET49 = isanumber
TARGET50 = jupiter
TARGET51 = kitty2
TARGET52 = kitty3
TARGET53 = kitty
TARGET54 = lardo
TARGET55 = lardoxx
TARGET56 = largest
TARGET57 = letters
TARGET58 = literals
TARGET59 = lobby3
TARGET60 = lobby
TARGET61 = madlib2
TARGET62 = madlib
TARGET63 = main
TARGET64 = Matuselah
TARGET65 = meals2
TARGET66 = meals
TARGET67 = methus2
TARGET68 = methus3
TARGET69 = methus4
TARGET70 = methus5
TARGET71 = methus5-stdin
TARGET72 = nested
TARGET73 = ollyolly
TARGET74 = pellets
TARGET75 = pension
TARGET76 = puthchars
TARGET77 = random_num_list
TARGET78 = rangeloop
TARGET79 = rangesteploop
TARGET80 = readdynamic
TARGET81 = readfile
TARGET82 = scandir
TARGET83 = scanfile
TARGET84 = scanning2
TARGET85 = scanning
TARGET86 = showchars
TARGET87 = simple
TARGET88 = simplecolor
TARGET89 = sizes
TARGET90 = strings
TARGET91 = structures
TARGET92 = sums
TARGET93 = taxes
TARGET94 = testscanf
TARGET95 = teststderr
TARGET96 = teststrigvec
TARGET97 = testtable
TARGET98 = threenames
TARGET99 = typer1
TARGET100 = ui
TARGET101 = useanalysis
TARGET102 = wc
TARGET103 = weather2
TARGET104 = weather
TARGET105 = weatherEU
TARGET106 = which
TARGET107 = words2lines
TARGET108 = writefile
TARGETS = writefile words2lines which weatherEU weather weather2 wc useanalysis ui typer1 threenames testtable teststrigvec teststderr testscanf taxes sums structures strings sizes simplecolor simple showchars scanning scanning2 scanfile scandir readfile readdynamic rangesteploop rangeloop random_num_list puthchars pension pellets ollyolly nested methus5-stdin methus5 methus4 methus3 methus2 meals meals2 Matuselah main madlib madlib2 lobby lobby3 literals letters largest lardoxx lardo kitty kitty3 kitty2 jupiter isanumber insults insult3 insult2 hundred htest hellomsf hellof height greater-orig greater genie genie3 genie2 genie1 forreal first fibonacci favkey1 dynamic1 duo dumpfunc dentist crash1 couplenames countlines countdwn continue color charstats charred charme charloop callval callex bonus bomber blowupvc blowup3 blowup2 blowup1 averageof3 assignstring assessed ascii ansi analysis AllyGally 2darrayfun 2darray
RMTARGETS = src/writefile src/words2lines src/which src/weatherEU src/weather src/weather2 src/wc src/ui src/typer1 src/threenames src/testtable src/teststrigvec src/teststderr src/testscanf src/taxes src/sums src/structures src/strings src/sizes src/simplecolor src/simple src/showchars src/scanning src/scanning2 src/scanfile src/scandir src/readfile src/readdynamic src/rangesteploop src/rangeloop src/random_num_list src/puthchars src/pension src/pellets src/ollyolly src/nested src/methus5-stdin src/methus5 src/methus4 src/methus3 src/methus2 src/meals src/meals2 src/Matuselah src/main src/madlib src/madlib2 src/lobby src/lobby3 src/literals src/letters src/largest src/lardoxx src/lardo src/kitty src/kitty3 src/kitty2 src/jupiter src/isanumber src/insults src/insult3 src/insult2 src/hundred src/htest src/hellomsf src/hellof src/height src/greater-orig src/greater src/genie src/genie3 src/genie2 src/genie1 src/forreal src/first src/fibonacci src/favkey1 src/dynamic1 src/duo src/dumpfunc src/dentist src/crash1 src/couplenames src/countlines src/countdwn src/continue src/color src/charstats src/charred src/charme src/charloop src/callval src/callex src/bonus src/bomber src/blowupvc src/blowup3 src/blowup2 src/blowup1 src/averageof3 src/assignstring src/assessed src/ascii src/ansi src/analysis src/AllyGally src/2darrayfun src/2darray
all: $(TARGETS) analysis
src/$(TARGET0)$(EEXT): src/$(TARGET0).c
	$(CC) $(CPPFLAGS) src/$(TARGET0).c  -o src/2darray $(LDFLAGS)
$(TARGET0): src/$(TARGET0)$(EEXT)
src/$(TARGET1)$(EEXT): src/$(TARGET1).c
	$(CC) $(CPPFLAGS) src/$(TARGET1).c  -o src/2darrayfun $(LDFLAGS)
$(TARGET1): src/$(TARGET1)$(EEXT)
src/$(TARGET2)$(EEXT): src/$(TARGET2).c
	$(CC) $(CPPFLAGS) src/$(TARGET2).c  -o src/AllyGally $(LDFLAGS)
$(TARGET2): src/$(TARGET2)$(EEXT)
src/$(TARGET4)$(EEXT): src/$(TARGET4).c
	$(CC) $(CPPFLAGS) src/$(TARGET4).c  -o src/ansi $(LDFLAGS)
$(TARGET4): src/$(TARGET4)$(EEXT)
src/$(TARGET5)$(EEXT): src/$(TARGET5).c
	$(CC) $(CPPFLAGS) src/$(TARGET5).c  -o src/ascii $(LDFLAGS)
$(TARGET5): src/$(TARGET5)$(EEXT)
src/$(TARGET6)$(EEXT): src/$(TARGET6).c
	$(CC) $(CPPFLAGS) src/$(TARGET6).c  -o src/assessed $(LDFLAGS)
$(TARGET6): src/$(TARGET6)$(EEXT)
src/$(TARGET7)$(EEXT): src/$(TARGET7).c
	$(CC) $(CPPFLAGS) src/$(TARGET7).c  -o src/assignstring $(LDFLAGS)
$(TARGET7): src/$(TARGET7)$(EEXT)
src/$(TARGET8)$(EEXT): src/$(TARGET8).c
	$(CC) $(CPPFLAGS) src/$(TARGET8).c  -o src/averageof3 $(LDFLAGS)
$(TARGET8): src/$(TARGET8)$(EEXT)
src/$(TARGET9)$(EEXT): src/$(TARGET9).c
	$(CC) $(CPPFLAGS) src/$(TARGET9).c  -o src/blowup1 $(LDFLAGS)
$(TARGET9): src/$(TARGET9)$(EEXT)
src/$(TARGET10)$(EEXT): src/$(TARGET10).c
	$(CC) $(CPPFLAGS) src/$(TARGET10).c  -o src/blowup2 $(LDFLAGS)
$(TARGET10): src/$(TARGET10)$(EEXT)
src/$(TARGET11)$(EEXT): src/$(TARGET11).c
	$(CC) $(CPPFLAGS) src/$(TARGET11).c  -o src/blowup3 $(LDFLAGS)
$(TARGET11): src/$(TARGET11)$(EEXT)
src/$(TARGET12)$(EEXT): src/$(TARGET12).c
	$(CC) $(CPPFLAGS) src/$(TARGET12).c  -o src/blowupvc $(LDFLAGS)
$(TARGET12): src/$(TARGET12)$(EEXT)
src/$(TARGET13)$(EEXT): src/$(TARGET13).c
	$(CC) $(CPPFLAGS) src/$(TARGET13).c  -o src/bomber $(LDFLAGS)
$(TARGET13): src/$(TARGET13)$(EEXT)
src/$(TARGET14)$(EEXT): src/$(TARGET14).c
	$(CC) $(CPPFLAGS) src/$(TARGET14).c  -o src/bonus $(LDFLAGS)
$(TARGET14): src/$(TARGET14)$(EEXT)
src/$(TARGET15)$(EEXT): src/$(TARGET15).c
	$(CC) $(CPPFLAGS) src/$(TARGET15).c  -o src/callex $(LDFLAGS)
$(TARGET15): src/$(TARGET15)$(EEXT)
src/$(TARGET16)$(EEXT): src/$(TARGET16).c
	$(CC) $(CPPFLAGS) src/$(TARGET16).c  -o src/callval $(LDFLAGS)
$(TARGET16): src/$(TARGET16)$(EEXT)
src/$(TARGET17)$(EEXT): src/$(TARGET17).c
	$(CC) $(CPPFLAGS) src/$(TARGET17).c  -o src/charloop $(LDFLAGS)
$(TARGET17): src/$(TARGET17)$(EEXT)
src/$(TARGET18)$(EEXT): src/$(TARGET18).c
	$(CC) $(CPPFLAGS) src/$(TARGET18).c  -o src/charme $(LDFLAGS)
$(TARGET18): src/$(TARGET18)$(EEXT)
src/$(TARGET19)$(EEXT): src/$(TARGET19).c
	$(CC) $(CPPFLAGS) src/$(TARGET19).c  -o src/charred $(LDFLAGS)
$(TARGET19): src/$(TARGET19)$(EEXT)
src/$(TARGET20)$(EEXT): src/$(TARGET20).c
	$(CC) $(CPPFLAGS) src/$(TARGET20).c  -o src/charstats $(LDFLAGS)
$(TARGET20): src/$(TARGET20)$(EEXT)
src/$(TARGET21)$(EEXT): src/$(TARGET21).c
	$(CC) $(CPPFLAGS) src/$(TARGET21).c  -o src/color $(LDFLAGS)
$(TARGET21): src/$(TARGET21)$(EEXT)
src/$(TARGET22)$(EEXT): src/$(TARGET22).c
	$(CC) $(CPPFLAGS) src/$(TARGET22).c  -o src/continue $(LDFLAGS)
$(TARGET22): src/$(TARGET22)$(EEXT)
src/$(TARGET23)$(EEXT): src/$(TARGET23).c
	$(CC) $(CPPFLAGS) src/$(TARGET23).c  -o src/countdwn $(LDFLAGS)
$(TARGET23): src/$(TARGET23)$(EEXT)
src/$(TARGET24)$(EEXT): src/$(TARGET24).c
	$(CC) $(CPPFLAGS) src/$(TARGET24).c  -o src/countlines $(LDFLAGS)
$(TARGET24): src/$(TARGET24)$(EEXT)
src/$(TARGET25)$(EEXT): src/$(TARGET25).c
	$(CC) $(CPPFLAGS) src/$(TARGET25).c  -o src/couplenames $(LDFLAGS)
$(TARGET25): src/$(TARGET25)$(EEXT)
src/$(TARGET26)$(EEXT): src/$(TARGET26).c
	$(CC) $(CPPFLAGS) src/$(TARGET26).c  -o src/crash1 $(LDFLAGS)
$(TARGET26): src/$(TARGET26)$(EEXT)
src/$(TARGET27)$(EEXT): src/$(TARGET27).c
	$(CC) $(CPPFLAGS) src/$(TARGET27).c  -o src/dentist $(LDFLAGS)
$(TARGET27): src/$(TARGET27)$(EEXT)
src/$(TARGET28)$(EEXT): src/$(TARGET28).c
	$(CC) $(CPPFLAGS) src/$(TARGET28).c  -o src/dumpfunc $(LDFLAGS)
$(TARGET28): src/$(TARGET28)$(EEXT)
src/$(TARGET29)$(EEXT): src/$(TARGET29).c
	$(CC) $(CPPFLAGS) src/$(TARGET29).c  -o src/duo $(LDFLAGS)
$(TARGET29): src/$(TARGET29)$(EEXT)
src/$(TARGET30)$(EEXT): src/$(TARGET30).c
	$(CC) $(CPPFLAGS) src/$(TARGET30).c  -o src/dynamic1 $(LDFLAGS)
$(TARGET30): src/$(TARGET30)$(EEXT)
src/$(TARGET31)$(EEXT): src/$(TARGET31).c
	$(CC) $(CPPFLAGS) src/$(TARGET31).c  -o src/favkey1 $(LDFLAGS)
$(TARGET31): src/$(TARGET31)$(EEXT)
src/$(TARGET32)$(EEXT): src/$(TARGET32).c
	$(CC) $(CPPFLAGS) src/$(TARGET32).c  -o src/fibonacci $(LDFLAGS)
$(TARGET32): src/$(TARGET32)$(EEXT)
src/$(TARGET33)$(EEXT): src/$(TARGET33).c
	$(CC) $(CPPFLAGS) src/$(TARGET33).c  -o src/first $(LDFLAGS)
$(TARGET33): src/$(TARGET33)$(EEXT)
src/$(TARGET34)$(EEXT): src/$(TARGET34).c
	$(CC) $(CPPFLAGS) src/$(TARGET34).c  -o src/forreal $(LDFLAGS)
$(TARGET34): src/$(TARGET34)$(EEXT)
src/$(TARGET35)$(EEXT): src/$(TARGET35).c
	$(CC) $(CPPFLAGS) src/$(TARGET35).c  -o src/genie1 $(LDFLAGS)
$(TARGET35): src/$(TARGET35)$(EEXT)
src/$(TARGET36)$(EEXT): src/$(TARGET36).c
	$(CC) $(CPPFLAGS) src/$(TARGET36).c  -o src/genie2 $(LDFLAGS)
$(TARGET36): src/$(TARGET36)$(EEXT)
src/$(TARGET37)$(EEXT): src/$(TARGET37).c
	$(CC) $(CPPFLAGS) src/$(TARGET37).c  -o src/genie3 $(LDFLAGS)
$(TARGET37): src/$(TARGET37)$(EEXT)
src/$(TARGET38)$(EEXT): src/$(TARGET38).c
	$(CC) $(CPPFLAGS) src/$(TARGET38).c  -o src/genie $(LDFLAGS)
$(TARGET38): src/$(TARGET38)$(EEXT)
src/$(TARGET39)$(EEXT): src/$(TARGET39).c
	$(CC) $(CPPFLAGS) src/$(TARGET39).c  -o src/greater $(LDFLAGS)
$(TARGET39): src/$(TARGET39)$(EEXT)
src/$(TARGET40)$(EEXT): src/$(TARGET40).c
	$(CC) $(CPPFLAGS) src/$(TARGET40).c  -o src/greater-orig $(LDFLAGS)
$(TARGET40): src/$(TARGET40)$(EEXT)
src/$(TARGET41)$(EEXT): src/$(TARGET41).c
	$(CC) $(CPPFLAGS) src/$(TARGET41).c  -o src/height $(LDFLAGS)
$(TARGET41): src/$(TARGET41)$(EEXT)
src/$(TARGET42)$(EEXT): src/$(TARGET42).c
	$(CC) $(CPPFLAGS) src/$(TARGET42).c  -o src/hellof $(LDFLAGS)
$(TARGET42): src/$(TARGET42)$(EEXT)
src/$(TARGET43)$(EEXT): src/$(TARGET43).c
	$(CC) $(CPPFLAGS) src/$(TARGET43).c  -o src/hellomsf $(LDFLAGS)
$(TARGET43): src/$(TARGET43)$(EEXT)
src/$(TARGET44)$(EEXT): src/$(TARGET44).c
	$(CC) $(CPPFLAGS) src/$(TARGET44).c  -o src/htest $(LDFLAGS)
$(TARGET44): src/$(TARGET44)$(EEXT)
src/$(TARGET45)$(EEXT): src/$(TARGET45).c
	$(CC) $(CPPFLAGS) src/$(TARGET45).c  -o src/hundred $(LDFLAGS)
$(TARGET45): src/$(TARGET45)$(EEXT)
src/$(TARGET46)$(EEXT): src/$(TARGET46).c
	$(CC) $(CPPFLAGS) src/$(TARGET46).c  -o src/insult2 $(LDFLAGS)
$(TARGET46): src/$(TARGET46)$(EEXT)
src/$(TARGET47)$(EEXT): src/$(TARGET47).c
	$(CC) $(CPPFLAGS) src/$(TARGET47).c  -o src/insult3 $(LDFLAGS)
$(TARGET47): src/$(TARGET47)$(EEXT)
src/$(TARGET48)$(EEXT): src/$(TARGET48).c
	$(CC) $(CPPFLAGS) src/$(TARGET48).c  -o src/insults $(LDFLAGS)
$(TARGET48): src/$(TARGET48)$(EEXT)
src/$(TARGET49)$(EEXT): src/$(TARGET49).c
	$(CC) $(CPPFLAGS) src/$(TARGET49).c  -o src/isanumber $(LDFLAGS)
$(TARGET49): src/$(TARGET49)$(EEXT)
src/$(TARGET50)$(EEXT): src/$(TARGET50).c
	$(CC) $(CPPFLAGS) src/$(TARGET50).c  -o src/jupiter $(LDFLAGS)
$(TARGET50): src/$(TARGET50)$(EEXT)
src/$(TARGET51)$(EEXT): src/$(TARGET51).c
	$(CC) $(CPPFLAGS) src/$(TARGET51).c  -o src/kitty2 $(LDFLAGS)
$(TARGET51): src/$(TARGET51)$(EEXT)
src/$(TARGET52)$(EEXT): src/$(TARGET52).c
	$(CC) $(CPPFLAGS) src/$(TARGET52).c  -o src/kitty3 $(LDFLAGS)
$(TARGET52): src/$(TARGET52)$(EEXT)
src/$(TARGET53)$(EEXT): src/$(TARGET53).c
	$(CC) $(CPPFLAGS) src/$(TARGET53).c  -o src/kitty $(LDFLAGS)
$(TARGET53): src/$(TARGET53)$(EEXT)
src/$(TARGET54)$(EEXT): src/$(TARGET54).c
	$(CC) $(CPPFLAGS) src/$(TARGET54).c  -o src/lardo $(LDFLAGS)
$(TARGET54): src/$(TARGET54)$(EEXT)
src/$(TARGET55)$(EEXT): src/$(TARGET55).c
	$(CC) $(CPPFLAGS) src/$(TARGET55).c  -o src/lardoxx $(LDFLAGS)
$(TARGET55): src/$(TARGET55)$(EEXT)
src/$(TARGET56)$(EEXT): src/$(TARGET56).c
	$(CC) $(CPPFLAGS) src/$(TARGET56).c  -o src/largest $(LDFLAGS)
$(TARGET56): src/$(TARGET56)$(EEXT)
src/$(TARGET57)$(EEXT): src/$(TARGET57).c
	$(CC) $(CPPFLAGS) src/$(TARGET57).c  -o src/letters $(LDFLAGS)
$(TARGET57): src/$(TARGET57)$(EEXT)
src/$(TARGET58)$(EEXT): src/$(TARGET58).c
	$(CC) $(CPPFLAGS) src/$(TARGET58).c  -o src/literals $(LDFLAGS)
$(TARGET58): src/$(TARGET58)$(EEXT)
src/$(TARGET59)$(EEXT): src/$(TARGET59).c
	$(CC) $(CPPFLAGS) src/$(TARGET59).c  -o src/lobby3 $(LDFLAGS)
$(TARGET59): src/$(TARGET59)$(EEXT)
src/$(TARGET60)$(EEXT): src/$(TARGET60).c
	$(CC) $(CPPFLAGS) src/$(TARGET60).c  -o src/lobby $(LDFLAGS)
$(TARGET60): src/$(TARGET60)$(EEXT)
src/$(TARGET61)$(EEXT): src/$(TARGET61).c
	$(CC) $(CPPFLAGS) src/$(TARGET61).c  -o src/madlib2 $(LDFLAGS)
$(TARGET61): src/$(TARGET61)$(EEXT)
src/$(TARGET62)$(EEXT): src/$(TARGET62).c
	$(CC) $(CPPFLAGS) src/$(TARGET62).c  -o src/madlib $(LDFLAGS)
$(TARGET62): src/$(TARGET62)$(EEXT)
src/$(TARGET63)$(EEXT): src/$(TARGET63).c
	$(CC) $(CPPFLAGS) src/$(TARGET63).c  -o src/main $(LDFLAGS)
$(TARGET63): src/$(TARGET63)$(EEXT)
src/$(TARGET64)$(EEXT): src/$(TARGET64).c
	$(CC) $(CPPFLAGS) src/$(TARGET64).c  -o src/Matuselah $(LDFLAGS)
$(TARGET64): src/$(TARGET64)$(EEXT)
src/$(TARGET65)$(EEXT): src/$(TARGET65).c
	$(CC) $(CPPFLAGS) src/$(TARGET65).c  -o src/meals2 $(LDFLAGS)
$(TARGET65): src/$(TARGET65)$(EEXT)
src/$(TARGET66)$(EEXT): src/$(TARGET66).c
	$(CC) $(CPPFLAGS) src/$(TARGET66).c  -o src/meals $(LDFLAGS)
$(TARGET66): src/$(TARGET66)$(EEXT)
src/$(TARGET67)$(EEXT): src/$(TARGET67).c
	$(CC) $(CPPFLAGS) src/$(TARGET67).c  -o src/methus2 $(LDFLAGS)
$(TARGET67): src/$(TARGET67)$(EEXT)
src/$(TARGET68)$(EEXT): src/$(TARGET68).c
	$(CC) $(CPPFLAGS) src/$(TARGET68).c  -o src/methus3 $(LDFLAGS)
$(TARGET68): src/$(TARGET68)$(EEXT)
src/$(TARGET69)$(EEXT): src/$(TARGET69).c
	$(CC) $(CPPFLAGS) src/$(TARGET69).c  -o src/methus4 $(LDFLAGS)
$(TARGET69): src/$(TARGET69)$(EEXT)
src/$(TARGET70)$(EEXT): src/$(TARGET70).c
	$(CC) $(CPPFLAGS) src/$(TARGET70).c  -o src/methus5 $(LDFLAGS)
$(TARGET70): src/$(TARGET70)$(EEXT)
src/$(TARGET71)$(EEXT): src/$(TARGET71).c
	$(CC) $(CPPFLAGS) src/$(TARGET71).c  -o src/methus5-stdin $(LDFLAGS)
$(TARGET71): src/$(TARGET71)$(EEXT)
src/$(TARGET72)$(EEXT): src/$(TARGET72).c
	$(CC) $(CPPFLAGS) src/$(TARGET72).c  -o src/nested $(LDFLAGS)
$(TARGET72): src/$(TARGET72)$(EEXT)
src/$(TARGET73)$(EEXT): src/$(TARGET73).c
	$(CC) $(CPPFLAGS) src/$(TARGET73).c  -o src/ollyolly $(LDFLAGS)
$(TARGET73): src/$(TARGET73)$(EEXT)
src/$(TARGET74)$(EEXT): src/$(TARGET74).c
	$(CC) $(CPPFLAGS) src/$(TARGET74).c  -o src/pellets $(LDFLAGS)
$(TARGET74): src/$(TARGET74)$(EEXT)
src/$(TARGET75)$(EEXT): src/$(TARGET75).c
	$(CC) $(CPPFLAGS) src/$(TARGET75).c  -o src/pension $(LDFLAGS)
$(TARGET75): src/$(TARGET75)$(EEXT)
src/$(TARGET76)$(EEXT): src/$(TARGET76).c
	$(CC) $(CPPFLAGS) src/$(TARGET76).c  -o src/puthchars $(LDFLAGS)
$(TARGET76): src/$(TARGET76)$(EEXT)
src/$(TARGET77)$(EEXT): src/$(TARGET77).c
	$(CC) $(CPPFLAGS) src/$(TARGET77).c  -o src/random_num_list $(LDFLAGS)
$(TARGET77): src/$(TARGET77)$(EEXT)
src/$(TARGET78)$(EEXT): src/$(TARGET78).c
	$(CC) $(CPPFLAGS) src/$(TARGET78).c  -o src/rangeloop $(LDFLAGS)
$(TARGET78): src/$(TARGET78)$(EEXT)
src/$(TARGET79)$(EEXT): src/$(TARGET79).c
	$(CC) $(CPPFLAGS) src/$(TARGET79).c  -o src/rangesteploop $(LDFLAGS)
$(TARGET79): src/$(TARGET79)$(EEXT)
src/$(TARGET80)$(EEXT): src/$(TARGET80).c
	$(CC) $(CPPFLAGS) src/$(TARGET80).c  -o src/readdynamic $(LDFLAGS)
$(TARGET80): src/$(TARGET80)$(EEXT)
src/$(TARGET81)$(EEXT): src/$(TARGET81).c
	$(CC) $(CPPFLAGS) src/$(TARGET81).c  -o src/readfile $(LDFLAGS)
$(TARGET81): src/$(TARGET81)$(EEXT)
src/$(TARGET82)$(EEXT): src/$(TARGET82).c
	$(CC) $(CPPFLAGS) src/$(TARGET82).c  -o src/scandir $(LDFLAGS)
$(TARGET82): src/$(TARGET82)$(EEXT)
src/$(TARGET83)$(EEXT): src/$(TARGET83).c
	$(CC) $(CPPFLAGS) src/$(TARGET83).c  -o src/scanfile $(LDFLAGS)
$(TARGET83): src/$(TARGET83)$(EEXT)
src/$(TARGET84)$(EEXT): src/$(TARGET84).c
	$(CC) $(CPPFLAGS) src/$(TARGET84).c  -o src/scanning2 $(LDFLAGS)
$(TARGET84): src/$(TARGET84)$(EEXT)
src/$(TARGET85)$(EEXT): src/$(TARGET85).c
	$(CC) $(CPPFLAGS) src/$(TARGET85).c  -o src/scanning $(LDFLAGS)
$(TARGET85): src/$(TARGET85)$(EEXT)
src/$(TARGET86)$(EEXT): src/$(TARGET86).c
	$(CC) $(CPPFLAGS) src/$(TARGET86).c  -o src/showchars $(LDFLAGS)
$(TARGET86): src/$(TARGET86)$(EEXT)
src/$(TARGET87)$(EEXT): src/$(TARGET87).c
	$(CC) $(CPPFLAGS) src/$(TARGET87).c  -o src/simple $(LDFLAGS)
$(TARGET87): src/$(TARGET87)$(EEXT)
src/$(TARGET88)$(EEXT): src/$(TARGET88).c
	$(CC) $(CPPFLAGS) src/$(TARGET88).c  -o src/simplecolor $(LDFLAGS)
$(TARGET88): src/$(TARGET88)$(EEXT)
src/$(TARGET89)$(EEXT): src/$(TARGET89).c
	$(CC) $(CPPFLAGS) src/$(TARGET89).c  -o src/sizes $(LDFLAGS)
$(TARGET89): src/$(TARGET89)$(EEXT)
src/$(TARGET90)$(EEXT): src/$(TARGET90).c
	$(CC) $(CPPFLAGS) src/$(TARGET90).c  -o src/strings $(LDFLAGS)
$(TARGET90): src/$(TARGET90)$(EEXT)
src/$(TARGET91)$(EEXT): src/$(TARGET91).c
	$(CC) $(CPPFLAGS) src/$(TARGET91).c  -o src/structures $(LDFLAGS)
$(TARGET91): src/$(TARGET91)$(EEXT)
src/$(TARGET92)$(EEXT): src/$(TARGET92).c
	$(CC) $(CPPFLAGS) src/$(TARGET92).c  -o src/sums $(LDFLAGS)
$(TARGET92): src/$(TARGET92)$(EEXT)
src/$(TARGET93)$(EEXT): src/$(TARGET93).c
	$(CC) $(CPPFLAGS) src/$(TARGET93).c  -o src/taxes $(LDFLAGS)
$(TARGET93): src/$(TARGET93)$(EEXT)
src/$(TARGET94)$(EEXT): src/$(TARGET94).c
	$(CC) $(CPPFLAGS) src/$(TARGET94).c  -o src/testscanf $(LDFLAGS)
$(TARGET94): src/$(TARGET94)$(EEXT)
src/$(TARGET95)$(EEXT): src/$(TARGET95).c
	$(CC) $(CPPFLAGS) src/$(TARGET95).c  -o src/teststderr $(LDFLAGS)
$(TARGET95): src/$(TARGET95)$(EEXT)
src/$(TARGET96)$(EEXT): src/$(TARGET96).c
	$(CC) $(CPPFLAGS) src/$(TARGET96).c  -o src/teststrigvec $(LDFLAGS)
$(TARGET96): src/$(TARGET96)$(EEXT)
src/$(TARGET97)$(EEXT): src/$(TARGET97).c
	$(CC) $(CPPFLAGS) src/$(TARGET97).c  -o src/testtable $(LDFLAGS)
$(TARGET97): src/$(TARGET97)$(EEXT)
src/$(TARGET98)$(EEXT): src/$(TARGET98).c
	$(CC) $(CPPFLAGS) src/$(TARGET98).c  -o src/threenames $(LDFLAGS)
$(TARGET98): src/$(TARGET98)$(EEXT)
src/$(TARGET99)$(EEXT): src/$(TARGET99).c
	$(CC) $(CPPFLAGS) src/$(TARGET99).c  -o src/typer1 $(LDFLAGS)
$(TARGET99): src/$(TARGET99)$(EEXT)
src/$(TARGET100)$(EEXT): src/$(TARGET100).c
	$(CC) $(CPPFLAGS) src/$(TARGET100).c  -o src/ui $(LDFLAGS)
$(TARGET100): src/$(TARGET100)$(EEXT)
src/$(TARGET102)$(EEXT): src/$(TARGET102).c
	$(CC) $(CPPFLAGS) src/$(TARGET102).c  -o src/wc $(LDFLAGS)
$(TARGET102): src/$(TARGET102)$(EEXT)
src/$(TARGET103)$(EEXT): src/$(TARGET103).c
	$(CC) $(CPPFLAGS) src/$(TARGET103).c  -o src/weather2 $(LDFLAGS)
$(TARGET103): src/$(TARGET103)$(EEXT)
src/$(TARGET104)$(EEXT): src/$(TARGET104).c
	$(CC) $(CPPFLAGS) src/$(TARGET104).c  -o src/weather $(LDFLAGS)
$(TARGET104): src/$(TARGET104)$(EEXT)
src/$(TARGET105)$(EEXT): src/$(TARGET105).c
	$(CC) $(CPPFLAGS) src/$(TARGET105).c  -o src/weatherEU $(LDFLAGS)
$(TARGET105): src/$(TARGET105)$(EEXT)
src/$(TARGET106)$(EEXT): src/$(TARGET106).c
	$(CC) $(CPPFLAGS) src/$(TARGET106).c  -o src/which $(LDFLAGS)
$(TARGET106): src/$(TARGET106)$(EEXT)
src/$(TARGET107)$(EEXT): src/$(TARGET107).c
	$(CC) $(CPPFLAGS) src/$(TARGET107).c  -o src/words2lines $(LDFLAGS)
$(TARGET107): src/$(TARGET107)$(EEXT)
src/$(TARGET108)$(EEXT): src/$(TARGET108).c
	$(CC) $(CPPFLAGS) src/$(TARGET108).c  -o src/writefile $(LDFLAGS)
$(TARGET108): src/$(TARGET108)$(EEXT)
src/analysis$(OEXT): src/analysis.c src/analysis.h src/defines.h
	$(CC)  $(CPPFLAGS) -c src/analysis.c   -o src/analysis$(OEXT) 
src/useanalysis$(OEXT): src/useanalysis.c src/analysis.h src/defines.h 
	$(CC)  $(CPPFLAGS) -c src/useanalysis.c  -o  src/useanalysis$(OEXT) 
src/useanalysis$(EEXT): src/analysis$(OEXT) src/useanalysis$(OEXT)
	$(LD) $? -o src/analysis$(EEXT) $(LDFLAGS)
useanalysis: src/useanalysis$(EEXT)
analysis: useanalysis
install: all
	mv $(RMTARGETS) bin
.PHONY: clean distclean 
clean: 
	rm -f $(OBJ) $(RMTARGETS)
distclean: clean
	rm -f bin/* Makefile* *.fit *.fits *.csv *.ssv *.tsv *.dat *.txt *.log
