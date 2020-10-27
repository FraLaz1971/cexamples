#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exits.h"
#define LMAXSIZE 256 /* max allowed line length */
#define FMAXNUM 16   /* max allowed number of fields (columns) in a row */
#define RS '\n'	    /* record (row) separator */
#define FS ','	    /* record (row) separator */
int main(int argc, char **argv)
{
	int c;		 /* Character read from the file. */
	FILE *ptr;	 /* Pointer to the file. FILE is a structure defined in <stdio.h> */
	int lc; 	 /* lc: lines counter */
	int cc; 	 /* cc: chars counter */
	int totlines;	 /* saves the total n. of lines read */
	int totchars;	 /* saves the total n. of chars read */
	char **field; /* fields (strings) of the current line */
	int fieldcount;  /* fields  counter*/
	int fcharcount; 	 /* field char counter*/
	int ff=0;	 /* flag goes 1 when a row field is found*/
	char temp[16];
	/* Open the file - no error checking done */
	char *buffer;
	size_t bufsize = LMAXSIZE;
	size_t characters;
	/* allocate a char buffer of dimension LMAXSIZE
	it can contain max 256 characters for default */
	if (argc != 2){ /* argx = means 1 argument after the command name*/
                puts("reads an ascii text file line-by-line");
                printf("usage: %s filename\n", argv[0]);
                return EX_BADARGS;
        } else {
	field = (char **)malloc(FMAXNUM * bufsize * sizeof(char));
		if( field == NULL)
		{
        		perror("readfilelines.c: Unable to allocate field buffer");
        		exit(1);
		}

	/* allocate a buffer of chars with length bufsize */
	buffer = (char *)malloc(bufsize * sizeof(char));
		if( buffer == NULL)
		{
        		perror("readfilelines.c: Unable to allocate buffer");
        		exit(1);
		}
	/* Open the file - no error checking done */
  	ptr = fopen(argv[1],"r");
				/* Read one character at a time, checking
				   for the End of File. EOF is defined
				   in <stdio.h> 			*/
	lc=0; totlines=0; totchars=0;
	while ((characters=getline(&buffer,&bufsize,ptr)) != EOF ) /* until you reach the end of the file */
	{
		/* characters = getline(&buffer,&bufsize,ptr); */
		printf("line %d read, %zu chars long: %s", lc, characters, buffer);
		cc=0; fieldcount=0;fcharcount=0;
		memcpy(temp, "", 16);
		while( buffer[cc] != RS ){ /* while on line characters */
			/* printf("buffer[%d] = %c\n", cc, buffer[cc]);
			printf("processing field n. %d\n", fieldcount);*/
			ff=1;
			if ( (buffer[cc] != FS) ){
				/* field[fcharcount][fieldcount]=buffer[cc]; */
					temp[fcharcount] = buffer[cc];
					fcharcount++;
				if ( (buffer[cc] != '\t') && (buffer[cc] != ' ' ) ){
				}
				/* printf("cc = %d fcc = %d temp = %s\n", cc, fcharcount, temp);  */
			} else {
				ff=0;
				if(ff==0)
					printf("FOUND! temp=%s\n", temp);
/*					printf("FOUND! buffer[%d] = %c temp=%s\n", fcharcount, buffer[fcharcount], temp);*/
				fieldcount++;
				fcharcount=0;
				memcpy(temp, "", 16);
			}
			/*
			printf("found field n. %d: %s", fc, field[fcc]);
			if (ff) 
				fc++; 
			ff=0;
			*/
			cc++;
		}
		printf("FOUND! temp=%s\n", temp);
		totchars=characters+totchars;
		lc++;
	}
	fclose(ptr);			/* Close the file. */
	printf("tot n. of lines read: %d\n", lc);
	printf("tot n. of chars read: %d\n", totchars);
	return 0;
	}
}

