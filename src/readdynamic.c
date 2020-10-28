/* Program to calculate the sum of n numbers entered arguments list */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int n, i, *ptr, sum = 0, ret=0;
	if (argc < 2) {
	        fprintf(stderr, "usage: %s n1 n2 ... nm\n", argv[0]);
        	return EXIT_FAILURE;
	} else {
	    	fprintf(stderr, "number of input elements: %d\n", argc - 1);
		n = argc - 1;
	    	ptr = (int*) malloc(n * sizeof(int));
		    /* if memory cannot be allocated */
	    if(ptr == NULL)
		{
			perror("Error! memory not allocated.");
		        exit(0);
		}
	    fprintf(stderr, "reading elements ... \n");
	    for(i = 1; i <= n; ++i)
	    {
	        *(ptr + i) = atoi(argv[i]);
	        sum += *(ptr + i);
	    }
	    fprintf(stderr, "Sum = %d\n", sum);
	    	/* deallocating the memory */
	    	free(ptr);
	    	return 0;
	}
}
