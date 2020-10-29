#include <stdio.h>
#define IN 1
/* inside a word */
#define OUT 0
/* outside a word */
/* count lines, words, and characters in input */
int main(int argc, char ** argv) 
{
	if (argc !=2 ){
		puts("gives stats on ascii text file");
		printf("usage %s filename\n", argv[0]);
		return 1;
	} else {
		int c, nl, nw, nc, state;
		state = OUT;
		nl = nw = nc = 0;
		FILE *fp;
        	int n = 0;
        	fp = fopen(argv[1],"r");
        	if(fp == NULL) {
                	        perror("Error in opening file");
                	        return(-1);
                }

		while ((c = getc(fp)) != EOF) {
			++nc;
			if (c == '\n')
				++nl;
			if (c == ' ' || c == '\n' || c == '\t')
				state = OUT;
			else if (state == OUT) {
				state = IN;
				++nw;
			}
		}
	puts("lines\twords\tchars");
	printf("%d\t%d\t%d\n", nl, nw, nc);
	return 0;
	}
}

