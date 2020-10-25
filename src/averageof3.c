#include <stdio.h>
#include <stdlib.h>
#include "exits.h"
/* compute the average between 3 numbers */
int main(int argc, char *argv[]){
	int n1, n2, n3; float avg;
	if (argc != 4){
		puts("computes the average of 3 integers");
		printf("usage: %s n1 n2 n3\n", argv[0]);
		return EX_BADARGS;
	} else {
		n1=atoi(argv[1]); n2=atoi(argv[2]); n3=atoi(argv[3]);
		avg = (n1+n2+n3)/3.0;
		printf("The average of %d %d %d is %f\n", n1, n2, n3, avg);
		return EX_OK;
	}

}
