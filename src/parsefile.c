#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defines.h"


extern float *data;
char *mkeyword[64];  /* array  of metadata keywords */
char *mvalue[64];    /* array  of metadata values   */
int  nmeta;          /* number of metadata items */
static char infile[64];
static char metainfile[64];

void parserow(char *mybuffer, int mncols);
void showdata(float *mydata, int mnrows, int mncols);

void open_metadata_file(const char *metafilen);
void parse_metadata_file();
void close_metadata_file();

void open_data_file(const char *filen);
void parse_data_file();
void close_data_file();
void allocate_buffer();
void allocate_data();
void deallocate_buffer();
void deallocate_data();

int main(int argc, char **argv)
{
    if (argc == 4){
    nrows=atoi(argv[2]); ncols=(atoi(argv[3]));
    	/* allocate a mybuffer of chars with length bufsize */
    memcpy(infile, argv[1], strlen(argv[1]));
 
    open_data_file(infile);

    allocate_buffer();
    
    allocate_data();
    
    parse_data_file();
    
    showdata(data, nrows, ncols);

    deallocate_buffer();
    
    deallocate_data();

    return 0;
        
    } else {
    printf("usage: %s infilename nrows ncolumns\n", argv[0]);
	return 1;
}


}

void parserow(char *mybuffer, int mncols){
/* Read one character at a time, checking for the End of File. 
 * EOF is defined in <stdio.h>  as -1 	*/
            cc=0; fcharcount=0;colcount=0;
            while( mybuffer[cc] != RS ){ /* while on line characters */
			if ( (mybuffer[cc] != FS) ){
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

void open_metadata_file(const char *metafilen){
   /* Open the file */
    mptr = fopen(metafilen,"r");
    /* checking if file exists */
    if (ptr==NULL) 
        { 
            fprintf(stderr, "no such metadata file: %s.\n", metafilen); 
            exit(EXIT_FAILURE); 
        }         
}

void parse_metadata_file(FILE *fp){
    
}

void close_metadata_file(FILE *mfp){
    fclose(mfp);			/* Close the metadata file.	*/    
}

void open_data_file(const char *filen){
    /* Open the file */
    ptr = fopen(filen,"r");
    /* checking if file exists */
    if (ptr==NULL) 
        { 
            fprintf(stderr, "no such file: %s.\n", filen); 
            exit(EXIT_FAILURE); 
        }     
}

void parse_data_file(){
	rowcount=0; totlines=0; totchars=0;
	while ((characters=getline(&buffer,&bufsize,ptr)) != EOF ) /* until you reach the end of the file */
    {
        parserow(buffer, ncols);	/* O/P the field values to the screen	*/
        rowcount++;
    }
    
}

void close_data_file(FILE *fp){
    fclose(fp);			/* Close the file.	*/
}

void allocate_buffer(){
	buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        		perror("parsefile.c: Unable to allocate buffer");
        		exit(1);
    }
}

void allocate_data(){
   	/* allocate an array of float to contain the read data */
	data = (float *)calloc(nrows*ncols, sizeof(float));
    if( buffer == NULL)
    {
        		perror("parsefile.c: Unable to allocate array");
        		exit(1);
    }
    
}

void deallocate_buffer(){
    free(buffer);
}
void deallocate_data(){
    free(data);    
}
