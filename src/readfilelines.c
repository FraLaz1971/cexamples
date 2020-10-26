#include <stdio.h>
#include <stdlib.h>
#include "exits.h"
#define LMAXSIZE 256 /* max allowed line length */
int main(int argc, char **argv)
{
	int c;		/* Character read from the file. */
	FILE *ptr;	/* Pointer to the file. FILE is a structure defined in <stdio.h> */
	int lc; 	/* lc: lines counter */
	int totlines;	/* saves the total n. of lines read */
	int totchars;	/* saves the total n. of chars read */
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
		lc++;
	}
	fclose(ptr);			/* Close the file. */
	return 0;
	}
}

