/* this program takes as input an ascii text file and 
 gives as output every work in the file in different lines */
#include <stdio.h>
#include <stdlib.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
		int c, nl, nw, nc, state;
        char *tempword; /* temporary word storing the currently processed word */
        int ciw; /* counter of characters being inserted in the current processed word */
        int lastciw=1; /* previous counter of characters being inserted */
        int cia=0; /* other character counter */
        int maxsl=1; /* length max of strings encountered */
		FILE *fp;
       	int n = 0;


int main(int argc, char ** argv) 
{
	if (argc !=2 ){
		puts("prints words from an input ascii text file one per line");
		printf("usage %s filename\n", argv[0]);
		return 1;
	} else {
            state = OUT;
            nl = nw = nc = 0; 
            tempword=malloc(255*sizeof(char));
    
            
            fp = fopen(argv[1],"r");
        	if(fp == NULL) {
                	        perror("Error in opening file");
                	        return(-1);
                }
        ciw=0;
		while ((c = getc(fp)) != EOF) {
			if ((c > 31) &&  (c < 127)){
                tempword[ciw] = c;
                ciw++;
            }
			++nc;
			if (c == '\n'){
				++nl;
            }
			if (c == ' ' || c == '\n' || c == '\t'){
                //printf("maxsl = %d, ciw-2 = %d\n", maxsl, ciw-2);
                if (ciw > maxsl)
                    maxsl = ciw;
                lastciw=maxsl;
                puts((const char *)tempword);
                ciw=0;
				state = OUT;
                for(cia=0; cia<maxsl; cia++){
                     /*printf("writing on index %d\n", cia);*/
                     tempword[cia] = ' ';
                }
            }
			else if (state == OUT) {
				state = IN;
				++nw;
			}
		}
    puts("****************************************");
    printf("*** length max of words encountered = %d\n", maxsl-1);
    puts("****************************************");
	puts("lines\twords\tchars");
	printf("%d\t%d\t%d\n", nl, nw, nc);
    puts("****************************************");
    free(tempword);
	return 0;
	}
}
