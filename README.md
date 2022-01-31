# cexamples
simple examples in c language inspired to the examples
from Dan Gookin (2004) book [C for dummies](https://www.amazon.com/C-Dummies-Dan-Gookin-2004-05-07/dp/B00E3FZLO8)
## How To
First, the instruction on how to run the examples will be given for a unix-like environment 
like GNU/Linux or MacOS or [msys2](https://www.msys2.org) on Microsoft Windows, 
with the [gcc](https://gcc.gnu.org/) c compiler yet installed.
For a detailed description on how to setup the needed environment and the c compiler, read
the documentation of your operating system or ask to the local expert of your lab/company.
You need a text editor. Microsoft notepad is *NOT* suitable, our advice is to use
KDE Advanced Text Editor ( [Kate](https://kate-editor.org/get-it/) ).
The commands will be given typing few commands at the terminal emulator. 
An Integrated Development Environment [IDE](https://en.wikipedia.org/wiki/Integrated_development_environment) 
can be used as well, but our advice is to do it after you learned how to run the examples 
on the [terminal](https://en.wikipedia.org/wiki/Terminal_emulator). 
Note that to run a program, the operating system have to address the filename of an executable file.
For instance the compilation of the file called pension.c may lead to the generation of the executable
file called *pension* on GNU-Linux or BSD or MacOS, ... and instead *pension.exe* 
on MS win / FreeDOS / WINE / ReactOS ... .
When you are at the prompt of a terminal console, you should write the relative or absolute path
of the executable file name or just the filename if the specific path is included among the paths 
saved in the list of the PATH environment variable.
When you run the program on an IDE, the path to the executable file is written in the internal
configuration files of the IDE (project) and executed by a subprocess that address the actual executable file.
When you run the executable file at the command prompt of a terminal console, the file is executed
typing at the keyboard the executable file name and then pushing enter. 
The following linked tutorial may also help: 
[https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)

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
### generated programs are in the src [directory]( https://en.wikipedia.org/wiki/Directory_(computing) ) after make
### or inside bin after make install
### look also at
### src/README
we suppose you are inside the src folder with the command prompt.
#
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
	francesco@squirrel:~/projects/c_cpp/cexamples$ ./methus2 
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
### run example of pension.c
	francesco@squirrel:~/projects/c_cpp/cexamples$ src/pension 
	enter name of Citizen (without any space):Francesco_Lazzarotto
	enter age of death:78
	enter age of job start:15
	enter age of job stop:76
	enter monthly salary($):2000
	enter contribution rate(%):22

	Francesco_Lazzarotto started his job at 15 years.
	Francesco_Lazzarotto stopped to work at 76 years.
	Francesco_Lazzarotto died 78 years old.
	Francesco_Lazzarotto monthly salary was 2000$.
	Francesco_Lazzarotto monthly contribution rate was 22%.
	Francesco_Lazzarotto paid monthly to social security 440.00$.
	Francesco_Lazzarotto contributed to Social Security for 61 years.
	Francesco_Lazzarotto paid 322080.00$ in contribution to Social security
	Francesco_Lazzarotto collected from Social Security for 2 years.
	Francesco_Lazzarotto received 24 monthly pension installments, 500.00$ each
	for a total of 12000$

### jupiter.c ---> do some astronomy and distance units computation and conversions
### usage
	./jupiter
### to see only output expressed in AU
	./jupiter | grep AU
###    //     //                 in miles
	./jupiter | grep mile
###    //     //                 in km
	./jupiter | grep km
### type a char and get it in output on the screen
	./favkey1
### read a char from a file and get it in output on the screen
	./favkey1 < data/mychar.txt
### read a char from a file and save it in output to a file named data/savedchar.txt
	./favkey1  > data/savedchar.txt
### to compile meals2.c with make utility
	make src/meals2
### compiling with DEBUG directive to have some debug printing
	rm src/meals2 src/meals2.o
	gcc -DDEBUG -g -O2 -c   src/meals2.c -o obj/meals2.o -Iinclude
	gcc -g -O2 -o meals2 obj/meals2.o -Llib -lm
### to recompile without DEBUG printing
	rm -i meals2 src/meals2.o
	make src/meals2
### to compile on MS win using MSVC + mingw32-make
(tested with MSVC 2008 64bit)

	config/configure-win-vc.sh  > Makefile.vc
	mingw32-make -f Makefile.vc

### to compile on MS win using MSVC + nmake
this is native with the Microsoft build-chain
	
	nmake /f Makefile.vc

###
## Documentation
this method allow to generate documentation
extracting it automatically from the comments
that are in the code, when the relevant content 
is put with proper tags.
### to create it, type:
    doxygen
this will generate a folder named doc
and inside it 2 sub-folders named html and latex

		doc
        	├── html
        	├── latex

the documentation in html format (hypertext) can be read
with your web browser of choice (google-chrome, firefox, edge, opera, ...)
opening the file named index.html inside the doc/html (sub)folder.
The documentation can be generated in pdf format entering at the prompt
of your terminal in the folder doc/latex and typing

	make

After the latex compiling process is completed, a file named *refman.pdf* containing 
the auto-generated documentation will lay in the same directory.
##
When you are in the MS Win mingw terminal (because the app is expected to work outside
the msys2 / msys or cygwin environment) you may use

	mingw32-make

This is a more general case, so should be used as much as possible.
For more instructions on how to use the make build system, you can refer to the
[GNU make](https://www.gnu.org/software/make) official documentation.

## Content
### here the contained files list
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
    ├── Doxyfile
    ├── infile1.typ
    ├── LICENSE
    ├── log
    │   └── err.log
    ├── obj
    ├── README
    ├── README.html
    ├── README.md
    ├── README.txt
    └── src
        ├── 2darray.c
        ├── 2darrayfun.c
        ├── alert2.c
        ├── alert.c
        ├── AllyGally.c
        ├── altnames.c
        ├── analysis.c
        ├── analysis.h
        ├── ansi.c
        ├── ascii.c
        ├── assessed.c
        ├── assignstring.c
        ├── averageof3.c
        ├── bases.c
        ├── blowup1.c
        ├── blowup2.c
        ├── blowup3.c
        ├── blowupvc.c
        ├── bomber.c
        ├── bonus.c
        ├── callex.c
        ├── callval.c
        ├── charcode.c
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
        ├── fgetline.c
        ├── fibonacci.c
        ├── first.c
        ├── forreal.c
        ├── genie1.c
        ├── genie2.c
        ├── genie3.c
        ├── genie.c
        ├── getline.c
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
        ├── printout.c
        ├── puthchars.c
        ├── random_num_list.c
        ├── rangeloop.c
        ├── rangesteploop.c
        ├── readdynamic.c
        ├── readfile.c
        ├── README
        ├── rhodium.c
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
        ├── toobig.c
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

    6 directories, 173 files
