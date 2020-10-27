#include <stdio.h>
#include <stdlib.h>
#include "defines.h"

extern float *data;


void parserow(char *mybuffer, int mncols){
            cc=0; fcharcount=0;colcount=0;
    		while( mybuffer[cc] != RS ){ /* while on line characters */
			if ( (mybuffer[cc] != FS) ){
				/* field[fcharcount][rowcount]=mybuffer[cc]; */
					temp[fcharcount] = mybuffer[cc];
					fcharcount++;
				if ( (mybuffer[cc] != '\t') && (mybuffer[cc] != ' ' ) ){
				}
				/* printf("cc = %d fcc = %d temp = %s\n", cc, fcharcount, temp);  */
			} else {
				printf("%s ", temp);
                data[rowcount*mncols+colcount]=atof(temp);                    
				colcount++;
				fcharcount=0;
				memcpy(temp, "", 16);
			}
			cc++;
		}
		printf("%s\n", temp);
        data[rowcount*mncols+colcount]=atof(temp);                    
		colcount++;

}

void showdata(float *mydata, int mnrows, int mncols){
    puts("showdata() START");
    int myrowcount=0; int mycolcount=0;
    for(myrowcount=0;myrowcount<mnrows;myrowcount++){
        for(mycolcount=0;mycolcount<mncols;mycolcount++){
                printf("%f ", mydata[myrowcount*mncols+mycolcount]);
        }
        printf("\n");
    }
    puts("showdata() STOP");
}


int main(int argc, char **argv)
{
    if (argc == 2){
    nrows=3; ncols=4;
    int c;			/* Character read from the file.	*/
    FILE *ptr;			/* Pointer to the file. FILE is a
				   structure  defined in <stdio.h>	*/
				/* Open the file - no error checking done */
    ptr = fopen(argv[1],"r");
				/* Read one character at a time, checking 
				   for the End of File. EOF is defined
				   in <stdio.h>  as -1 			*/
    	/* allocate a mybuffer of chars with length bufsize */
	buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        		perror("parsefile.c: Unable to allocate buffer");
        		exit(1);
    }

    
   	/* allocate an array of float containing the data */
	data = (float *)calloc(nrows*ncols, sizeof(float));
    if( buffer == NULL)
    {
        		perror("parsefile.c: Unable to allocate array");
        		exit(1);
    }

    
	rowcount=0; totlines=0; totchars=0;
	while ((characters=getline(&buffer,&bufsize,ptr)) != EOF ) /* until you reach the end of the file */
    {
        parserow(buffer, 4);		/* O/P the characters to the screen	*/
        rowcount++;
    }

    fclose(ptr);			/* Close the file.			*/
    showdata(data, 3, 4);

    return 0;

        
    } else {
    printf("usage: %s infilename \n", argv[0]);
	return 1;
}


}

