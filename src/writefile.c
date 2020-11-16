#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define MDIM 1024

FILE *ofptr;  /* define a pointer to output file */
char *str = "Test string \n";
char es[MDIM] = "";
char buff[MDIM] = "";
int ch, i;
unsigned int a1d[MDIM];  
char outfilename[MDIM];

int main(int argc, char **argv)
{
    if (argc == 2){
    char ch;
    /* open file for writing */
    strcpy(outfilename, argv[1]);
         ofptr = fopen(outfilename,"w");
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

    /* */
    
    printf("saving on file %s\n", outfilename);
    puts("Start typing");
    puts("Press CTRL-D (2 times) to stop");
    for(;;)
    {
        ch=getchar();
        if(ch==EOF)
        {
            break;
        } else
            fprintf(ofptr, "%c", ch);
    }
    printf("\nThanks!\n");
    return(0);
    } else {
        fprintf(stderr, "usage:%s <filename>\n", argv[0]);
        return 1;
    }
}
