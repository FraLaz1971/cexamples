#include <stdio.h>

/* this program takes the filename of an ascii text file
in input and prints every char. distantiated by a space 
at the end of reading gives the number of file lines read */

int main(int argc, char **argv){
	if (argc == 2){
		int c, nl; nl = 0;
		FILE *fp;
		int n = 0;
   		fp = fopen(argv[1],"r");
		if(fp == NULL) {
      			perror("Error in opening file");
      			return(-1);
	   	}
		do {
      			c = fgetc(fp);
			if (c == '\n')
				++nl;
      			if( feof(fp) ) {
         			break ;
      		}
     		 printf("%c ", c);
   		} while(1);
		  puts("----------------------------");
		  puts("******************************");
		 printf("*** n. of lines read: %d   *** \n", nl);
		  puts("******************************");

		return 0;
	} else {
		printf("usage: %s filename \n ", argv[0]);
		return 1;
	}
}
