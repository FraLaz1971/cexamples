#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exits.h"
#define LMAXSIZE 3 /* max allowed line length */
#define FSIZE 16     /* max allowed number of characters in a field (cell) include '\0' */
#define FMAX 16      /* max allowed number of fields (columns) in a row */
#define RMAX 16      /* max allowed number of records (rows) in a file */
#define RS '\n'     /* record (row) separator */
#define FS ','     /* record (row) separator */
FILE *ptr;  /* Pointer to the data file. FILE is a structure defined in <stdio.h> */
FILE *mptr; /* Pointer to the metadata file. FILE is a structure defined in <stdio.h> */

int c; /* Character read from the file. */
int rowcount;  /* rowcount: lines counter */
int cc;  /* cc: chars counter */
int totlines; /* saves the total n. of lines read */
int totchars; /* saves the total n. of chars read */
char *field;     /* file table array */
int colcount;    /* fields  counter*/
int fcharcount;  /* field char counter*/
int ff=0; /* flag goes 1 when a row field is found*/
char temp[FSIZE];
char *buffer; /* buffer containing the chars read from file*/
size_t bufsize = LMAXSIZE; /* max. size of char buffer */
size_t characters;
float* data; /* array to contain the read data (2D matrix) */
int nrows=RMAX;
int ncols=FMAX;
