# cexamples
simple examples in c language inspired to the examples
from Dan Gookin (2004) book [C for dummies](https://www.amazon.com/C-Dummies-Dan-Gookin-2004-05-07/dp/B00E3FZLO8)
## How To
First, the instruction on how to run the examples will be given for a unix-like environment like GNU/Linux or MacOS or
[msys2](https://www.msys2.org) on Microsoft Windows, with the gcc c compiler yet installed.
For a detailed description on how to setup the needed environment and the c compiler read
the documentation of your operating system or ask to the local expert of your lab/company.
You need a text editor. Microsoft notepad is *NOT* suitable, our advice is to use
KDE Advanced Text Editor ( [Kate](https://kate-editor.org/get-it/) )
### to compile all the examples type
	./configure
### then type
	make
### or
	gmake
### to install
	make install
### to compile only one of them, say printone.c, type
	make printone
### to remove generated files type
	make clean
### to remove ALL generated files, included Makefile (you have to run ./configure again, then)
	make distclean
### to see the generated executable files
	ls . bin
### to see all generated files
	ls -alhrt *
### generated programs are in the current dir after make
### or inside bin after make install
### look also at
### src/README
	./insult2 < data/input.txt
	cat data/input.txt
	jdoe
	./insult3 < data/input.txt
	cat data/input.txt
	jdoe
	./kitty3 < data/input2.txt 2> log/err.log
	cat data/input2.txt
	karin
	to beat you
	cat log/err.log

	you entered 1 elements 

	you entered 2 elements 
### input numbers from keyboard 
	./methus2
### and from file
	./methus2 < data/methus2.txt
	./methus2 
####
	./methus-stdin <data/methus-average.txt
	./methus-stdin <data/methus-badluck.txt
# ... and so on
#### execution attempts
	How old was Methuselah?old
	Methuselah was 0 years old.
	francesco@squirrel:~/projects/c_cpp/cexamples$ ./methus2 
	How old was Methuselah?4.5
	Methuselah was 4 years old.
##
	francesco@squirrel:~/projects/c_cpp/cexamples$ ./methus2 
	How old was Methuselah?1000000000000000
	Methuselah was -1530494976 years old.
	*** stack smashing detected ***: <unknown> terminated
	Aborted (core dumped)
#####
	./pension <data/default-pension.txt
### copy the input file to another and change input data
	cp data/default-pension.txt data/my-pension.txt
	nano data/my-pension.txt
### edit the input data and save
	./pension <data/my-pension.txt
### also you can run interactively
	./pension
### or put stdin in the commandline
	./pension <<< "Rosmunda 75 25 64 3000 20"
### jupiter.c ---> do some astronomy and distance units computation and conversions
### usage
	./jupiter
### to see only output expressed in AU
	./jupiter | grep AU
###    //     //                 in miles
	./jupiter | grep mile
###    //     //                 in km
	./jupiter | grep km
# type a char and get it in output on the screen
	./favkey1
# read a char from a file and get it in output on the screen
	./favkey1 < data/mychar.txt
# read a char from a file and save it in output to a file named data/savedchar.txt
	./favkey1  > data/savedchar.txt
# to compile meals2.c with make utility
	make src/meals2
# compiling with DEBUG directive to have some debug printing
	rm src/meals2 src/meals2.o
	gcc -DDEBUG -g -O2 -c   src/meals2.c -o obj/meals2.o -Iinclude
	gcc -g -O2 -o meals2 obj/meals2.o -Llib -lm
# to recompile without DEBUG printing
	rm -i meals2 src/meals2.o
	make src/meals2
# to compile on MS win using MSVC (tested with MSVC 2008 64bit)
	config/configure-win-vc.sh  > Makefile.vc
	mingw32-make -f Makefile.vc
###
        ../cexamples
        ├── bin
        ├── config
        │   ├── configurecrossi686mingw.sh
        │   ├── configurecrossx86_64mingw.sh
        │   ├── configure-mac.sh
        │   ├── configure.sh
        │   ├── configure-win-i686-mingw.sh
        │   ├── configure-win-mingw.sh
        │   └── configure-win-vc.sh
        ├── configure
        ├── data
        │   ├── bill.txt
        │   ├── commentedfirst.csv
        │   ├── dataset03.conf
        │   ├── dataset03.csv
        │   ├── default-pension.txt
        │   ├── first.csv
        │   ├── functiondata.tsv
        │   ├── input2.txt
        │   ├── input.txt
        │   ├── intlist10bis.txt
        │   ├── intlist10.txt
        │   ├── intrand35.txt
        │   ├── label1.csv
        │   ├── lilla.dat
        │   ├── methus2.txt
        │   ├── methus-average.txt
        │   ├── methus-badluck.txt
        │   ├── methus.txt
        │   ├── msout.txt
        │   ├── mychar.txt
        │   ├── outdata
        │   ├── people.ssv
        │   ├── people.ssv.save
        │   ├── savedchar.txt
        │   ├── scanfin.txt
        │   ├── second.csv
        │   ├── somechar2.txt
        │   ├── somechar.txt
        │   ├── table1x3.csv
        │   ├── table3x4.csv
        │   ├── table3x4-rand.csv
        │   ├── table3x4.tsv
        │   └── third.csv
        ├── LICENSE
        ├── log
        │   └── err.log
        ├── Makefile
        ├── Makefile.lnx
        ├── obj
        ├── README
        └── src
            ├── 2darray.c
            ├── 2darrayfun.c
            ├── AllyGally.c
            ├── analysis.c
            ├── analysis.h
            ├── ansi.c
            ├── ascii.c
            ├── assessed.c
            ├── assignstring.c
            ├── averageof3.c
            ├── blowup1.c
            ├── blowup2.c
            ├── blowup3.c
            ├── blowupvc.c
            ├── bomber.c
            ├── bonus.c
            ├── callex.c
            ├── callval.c
            ├── charloop.c
            ├── charme.c
            ├── charred.c
            ├── charstats.c
            ├── color.c
            ├── continue.c
            ├── countdwn.c
            ├── countlines.c
            ├── couplenames.c
            ├── crash1.c
            ├── defines.h
            ├── dentist.c
            ├── dumpfunc.c
            ├── duo.c
            ├── dynamic1.c
            ├── exits.h
            ├── favkey1.c
            ├── fibonacci.c
            ├── first
            ├── first.c
            ├── forreal.c
            ├── genie1.c
            ├── genie2.c
            ├── genie3.c
            ├── genie.c
            ├── greater.c
            ├── greater-orig.c
            ├── head.h
            ├── height.c
            ├── hellof.c
            ├── hellomsf.c
            ├── htest.c
            ├── hundred.c
            ├── insult2.c
            ├── insult3.c
            ├── insults.c
            ├── isanumber.c
            ├── jupiter.c
            ├── kitty2.c
            ├── kitty3.c
            ├── kitty.c
            ├── lardo.c
            ├── lardoxx.c
            ├── largest.c
            ├── letters.c
            ├── literals.c
            ├── lobby3.c
            ├── lobby.c
            ├── madlib2.c
            ├── madlib.c
            ├── main.c
            ├── Matuselah.c
            ├── meals2.c
            ├── meals.c
            ├── methus2.c
            ├── methus3.c
            ├── methus4.c
            ├── methus5.c
            ├── methus5-stdin.c
            ├── nested.c
            ├── ollyolly.c
            ├── pellets.c
            ├── pension.c
            ├── puthchars.c
            ├── random_num_list.c
            ├── rangeloop.c
            ├── rangesteploop.c
            ├── readdynamic.c
            ├── readfile.c
            ├── README
            ├── scandir.c
            ├── scanfile.c
            ├── scanning2.c
            ├── scanning.c
            ├── showchars.c
            ├── simple.c
            ├── simplecolor.c
            ├── sizes.c
            ├── strings.c
            ├── structures.c
            ├── sums.c
            ├── taxes.c
            ├── testscanf.c
            ├── teststderr.c
            ├── teststrigvec.c
            ├── testtable.c
            ├── threenames.c
            ├── typer1.c
            ├── ui.c
            ├── useanalysis.c
            ├── wc.c
            ├── weather2.c
            ├── weather.c
            ├── weatherEU.c
            ├── which.c
            ├── words2lines.c
            └── writefile.c

            6 directories, 161 files
