 /*  using 'fclose' function */
#define MDIM 255  /* fixed max dimension of buffers & arrays */
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *ifptr;  /* define a pointer to input file */
FILE *ofptr;  /* define a pointer to output file */
char *str = "Test string \n";
char es[MDIM] = "";
char oes[MDIM] = "";
char buff[MDIM] = "";
int ch, i;
unsigned int a1d[MDIM];
char *outfilename;
char *infilename;
int main (int argc, char *argv[])
{
     /* argc = n of input pars, argv[0] = executable name, argv[1] - argv[n-1] cmdline pars */
     if (argc < 3) {
       fprintf(stderr,"usage %s <infilename> <outfilename> \n", argv[0]);
       fprintf(stderr,"e.g %s infile1.typ outfile1.dat \n", argv[0]);
       exit(0);
     }
     
     /* print on stderr all positional parameters*/
     for (i=0; i<argc; i++){
       fprintf(stderr,"%s: argv %d = %s \n", argv[0] , i, argv[i]);
     }
     strcpy(es, argv[0]);
     /* open input file for reading */
     
     infilename = (char *) argv[1];
     strcat(es, ": Can't open file "); strcat(es, infilename); strcat(es, " for reading\n");
     ifptr = fopen(infilename,"r");
     if (ifptr == NULL){ 
       fprintf(stderr,"Error OPENING FILE: err msg = %s\n", strerror(errno));
       fprintf(stderr,"fopen() failed in file %s at line # %d\n", __FILE__,__LINE__);
       perror(es);  /* then handle the error */
       fprintf(stderr,"exit value = %d : exiting\n", EXIT_FAILURE);
       exit(EXIT_FAILURE);
     } else
     {
       ferror ( ifptr  );
     }
     strcpy(es, argv[0]);
     fprintf(stderr, "%s: file %s correctly open for reading\n", argv[0], infilename );
     /* prepare error message */
     fprintf(stderr, "%s: preparing error message\n", argv[0] );
     /* open output file for writing */
     outfilename = (char *) argv[2];
     strcat(oes, ": Can't open file "); strcat(oes, outfilename); strcat(oes, " for writing \n"); 
     fprintf(stderr, "%s: outfilename now containing %s for saving\n", argv[0], outfilename );
     fprintf(stderr, "%s: before opening %s for saving\n", argv[0], outfilename );
     ofptr = fopen(outfilename,"w");
     fprintf(stderr, "%s: after opening %s for saving\n", argv[0], outfilename );
     if ( ofptr == NULL  )  /* if can't open outfile receive an herror on opening file */
     {
       printf("Error OPENING FILE: err msg = %s\n", strerror(errno));
       fprintf(stderr,"fopen() failed in source file %s at line # %d\n", __FILE__,__LINE__);
       perror(es);  /* then handle the error */
       printf("exit value = %d : exiting\n", EXIT_FAILURE);
         exit(EXIT_FAILURE);
     } else {
       ferror ( ofptr );
    }
    fprintf(stderr, "%s: file %s correctly open for writing\n", argv[0], outfilename );
    /* process input data */
     while ( ( ch = fgetc(ifptr)) != EOF )  /* until you don't get the end of input file */
     {
       fputc(ch,ofptr);  /* write the file content on outfile */
       if(ferror(ofptr))
       {
         printf("File Error writing rows ..!!\n");
         fprintf(stderr,"fopen() failed in source file %s at line # %d\n", __FILE__,__LINE__);
       }
     }
     fclose(ifptr);  /* close the input file */
     /* now open read only the same output file and write the content on screen */
    fprintf(stderr, "%s: file %s reopened read only to show the content:\n", argv[0], outfilename );
    fprintf(stderr, "\n%s: ****************************\n", argv[0], outfilename );
    fprintf(stderr, "%s: *** content of file %s START ***\n", argv[0], outfilename );
     freopen(outfilename,"r",ofptr);
     if ( ifptr == NULL  )  /* if can't open outfile receive an herror on opening file */
     {
       printf("Error RE-OPENING FILE: err msg = %s\n", strerror(errno));
       fprintf(stderr,"freopen() failed in file %s at line # %d", __FILE__,__LINE__);
       perror(es);  /* then handle the error */
       printf("exit value = %d : exiting\n", EXIT_FAILURE);
       exit(EXIT_FAILURE);
     } else {
       
      }
       while ( ( ch = fgetc(ofptr)) != EOF )  /* until you don't get the end of file */
       {
         fputc(ch,stdout);  /* write the file content on stdout */
         if(ferror(ofptr))
         {
           printf("File Error..!!\n");
           fprintf(stderr,"fopen() failed in file %s at line # %d", __FILE__,__LINE__);
         }
       }
    fprintf(stderr, "\n%s: *** content of file %s END ***\n", argv[0], outfilename );
    fprintf(stderr, "%s: ****************************\n", argv[0], outfilename );

       fclose(ofptr);
    fprintf(stderr, "%s: file %s closed. End of the program. Bye. \n", argv[0], outfilename );

     return 0;
}
