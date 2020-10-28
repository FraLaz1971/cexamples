/* madlib.c Source Code Written by fralaz1971 */
#include <stdio.h>

int main()
{
	char adjective[20];
	char food[20];
	char chore[20];
	char furniture[20];
	int ret;
	/* Get the words to use in the madlib */
	printf("Enter an adjective:");
	 /* prompt */
	ret = scanf("%s",adjective);
	 /* input */
	printf("Enter a food:");
	ret = scanf("%s",food);
	printf("Enter a household chore (past tense):");
	ret = scanf("%s",chore);
	printf("Enter an item of furniture:");
	ret = scanf("%s",furniture);
	/* Display the output */
	printf("\n\nDon’t touch that %s %s!\n",adjective,food);
	printf("I just %s the %s!\n",chore,furniture);
	return(0);
}
