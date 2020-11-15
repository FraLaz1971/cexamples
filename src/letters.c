#include <stdio.h>
int main()
{
	char alphabet;
	for(alphabet='A';alphabet<='Z';alphabet=alphabet+1){
		printf("%c ",alphabet);
	}
	putchar('\n');
	/* when there is only one line after the for you can omit the braces */
	for(alphabet='A';alphabet<='Z';alphabet=alphabet+1)
		printf("%i ",alphabet);
	putchar('\n');
	for(alphabet='a';alphabet<='z';alphabet=alphabet+1)
		printf("%c ",alphabet);
	putchar('\n');
	for(alphabet='a';alphabet<='z';alphabet=alphabet+1)
		printf("%i ",alphabet);
	putchar('\n');
	for(alphabet=0;alphabet<127;alphabet=alphabet+1)
		printf("char '%c'--ascii-->%i\n",alphabet, alphabet);
	putchar('\n');
	return(0);
}
