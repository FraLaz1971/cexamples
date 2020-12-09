/* couplenames.c program to show how c strings work */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strelems(char *str);

int main(int argc, char **argv){
	if(argc == 4){
		int cur; char c1;
		char *name1=""; name1 = malloc(strelems(argv[1])*sizeof(char));
		strcpy(name1, argv[1]);
		char *name2=""; name2 = malloc(strelems(argv[2])*sizeof(char));
		strcpy(name2, argv[2]);
        	char *name3=""; name3 = malloc(strelems(argv[3])*sizeof(char));
		strcpy(name3, argv[3]);
		printf("1D array name1[] has size %i \n", strelems(name1));
		puts("now scanning name1[] content");
		for(cur=0;cur<strelems(name1);cur++)
				printf("name1[%d] = '%c' ascii: %d\n", cur, name1[cur], name1[cur]);
		printf("1D array name2[] has size %i \n", strelems(name2));
		puts("now scanning name2[] content");
        	for(cur=0;cur<strelems(name2);cur++)
			printf("name2[%d] = '%c' ascii: %d\n", cur, name2[cur], name2[cur]);
	       	puts("\nwait a bit the third one comes");
		printf("1D array name3[] has size %i \n", strelems(name3));
        	for(cur=0;cur<strelems(name3);cur++)
            		printf("name3[%d] = '%c' ascii: %d\n", cur, name3[cur], name3[cur]);
            	puts("\nthe third name is quite strange, press this enter thing to close a terminal");
        	c1 = getchar();
		return 0;
	} else
	{
		fprintf(stderr, "this program takes in input 3 names and shows the related strings\n");
		fprintf(stderr, "usage: %s <name1> <name2> <name3>\n", argv[0]);
		return 1;
	}
}

int strelems(char *str)
{
	int N=0;
	while(1){
		if (str[N++] == 0) break;
	}
	return N;
}
