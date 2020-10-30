#include <stdio.h>
/* count digits, white space, others giving statistics on the 
 different types of characters*/
int main(int argc, char **argv)
{
    if(argc==2){
    int c, i; 
    int nwhite, ncomma, ncolon, nsemicolon, ndot, nother;
	FILE *fp;
   	int n = 0;
    int ndigit[10];
    nwhite = nother = ncomma = ncolon = nsemicolon = ndot = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    /*    open the input file for reading */
    fp = fopen(argv[1],"r");
        	if(fp == NULL) {
                	        perror("Error in opening file");
                	        return(-1);
                }

    while ((c = getc(fp)) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else if (c == ',')
            ++ncomma; 
        else if (c == ':')
            ++ncolon;
        else if (c == ';')
            ++nsemicolon; 
        else if (c == '.')
            ++ndot;
        else
            ++nother;
    puts("showing digits statistics:");
    puts("#0\t#1\t#2\t#3\t#4\t#5\t#6\t#7\t#8\t#9");
    for (i = 0; i < 10; ++i)
        printf(" %d\t", ndigit[i]);
    printf("\nn. whites ( ) = %d, n. commas (,) = %d",nwhite, ncomma);
    printf("\nn. dots (.) = %d, n. colon (:) = %d",ndot, ncolon);
    printf("\nn. semicolon (;) = %d, n. other = %d\n",nsemicolon, nother);
    return 0;
    } else {
        puts("statistics on the different types of characters read in a file");
		printf("usage %s filename\n", argv[0]);
		return 1;
    }
}
