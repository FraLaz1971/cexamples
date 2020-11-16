#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int c; char add[13]="";
	int number;
	printf("I am your computer genie!\n");
	do {
		printf("%s Enter a number from 0 to 9:", add);
		c = scanf("%i", &number);
		fprintf(stderr, "number is %i\n", number);
		memcpy(add, "I told you:", 13);
	} while ( (number>9) || (number<0) );
	if(number<5)
	{
		printf("That number is less than 5!\n");
	}
	printf("The genie knows all, sees all!\n");
	return(0);
}
