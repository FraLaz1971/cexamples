#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exits.h"
#define LMAXSIZE 3 /* max allowed line length */
#define FSIZE 3     /* max allowed number of characters in a field (cell)  */
#define FMAX 3      /* max allowed number of fields (columns) in a row */
#define RMAX 2      /* max allowed number of records (rows) in a file */
#define RS '\n'	     /* record (row) separator */
#define FS ','	     /* record (row) separator */
int main(int argc, char **argv)
{
	int c;		 /* Character read from the file. */
	FILE *ptr;	 /* Pointer to the file. FILE is a structure defined in <stdio.h> */
	int linecount; 	 /* linecount: lines counter */
	int cc; 	 /* cc: chars counter */
	int totlines;	 /* saves the total n. of lines read */
	int totchars;	 /* saves the total n. of chars read */
	char *field; /* file table array */
	int fieldcount;  /* fields  counter*/
	int fcharcount; 	 /* field char counter*/
	int ff=0;	 /* flag goes 1 when a row field is found*/
	char temp[3];
	/* Open the file - no error checking done */
	char *buffer;
	size_t bufsize = LMAXSIZE;
	size_t characters;
	/* allocate a char buffer of dimension LMAXSIZE
	it can contain max 256 characters for default */
                printf("create a NxM = %dx%d string table\n", RMAX, FMAX);
        field = (char *)calloc(RMAX * FMAX * bufsize , sizeof(char)); 
            if( field == NULL)
            {
        		perror("readfilelines.c: Unable to allocate field buffer");
        		exit(1);
            }
    linecount=0; fieldcount=0;
    for(linecount=0; linecount<RMAX; linecount++){ /* scan the rows*/
            for(fieldcount=0; fieldcount<FMAX; fieldcount++){ /* scan the columns */
            sprintf(temp,"%d", linecount+fieldcount);
            printf("writing %s on %d,%d\n", temp, linecount, fieldcount);
			memcpy(&field[(FMAX*linecount)+fieldcount], temp, 1);
/*                memcpy(field[linecount][fieldcount], "", 1); */
            }
    }


/*    printf("field[0][0] = %s", field[linecount][fieldcount]);
    printf("field[0][0] = %s", field[linecount][fieldcount]);*/
    for(linecount=0; linecount<RMAX; linecount++){ /* scan the rows*/
            for(fieldcount=0; fieldcount<FMAX; fieldcount++){ /* scan the columns */
                printf("%.1s ", &field[FMAX*linecount+fieldcount]); 
            }
            puts("");
    }
    puts("");
    return 0;
}
