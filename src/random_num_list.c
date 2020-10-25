#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "exits.h"
#define IMIN 0
#define IMAX 100
/* compute the average between 3 numbers */
int main(int argc, char *argv[]){
	int n; /* n. of integers to be generated */
	int c; /* counts the integers */
	if (argc != 2){
		printf("create a list of n random integers in [%d,%d)\n", IMIN, IMAX);
		printf("usage: %s n\n", argv[0]);
		return EX_BADARGS;
	} else {
		n=atoi(argv[1]);
		time_t t;
		/* Intializes random number generator */
   		srand((unsigned) time(&t));
	       /* Print n random numbers from IMIN and IMAX-1 */
		for (c=0; c<n; c++){
			printf("%d\n", rand() %IMAX);
		}
		return EX_OK;
	}

}
