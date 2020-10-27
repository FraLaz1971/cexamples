#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defines.h"
int main(int argc, char **argv)
{
	/* memory allocation for a vector of strings with size FMAX */
        bufsize=FSIZE-1; ncols=4; nrows=3;
    	field = (char *)malloc(FMAX * bufsize * sizeof(char));
        /* colcount counts columns*/
        for (rowcount=0;rowcount<nrows;rowcount++){
            for (colcount=0;colcount<ncols;colcount++){
                sprintf(temp,"%d", rowcount*ncols+colcount);
                memcpy(&field[colcount], temp, FSIZE);
                if(colcount != (ncols-1))
                    printf("%s%c",  &field[colcount], FS);
                else
                    printf("%s\n",  &field[colcount]);
            }
        }
/*      memcpy(field[1], "cat", 3);
        memcpy(field[3], "fox", 3); */
	    return 0;
}
