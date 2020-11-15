#include <stdio.h>
int main()
{
	char choice; int ret;
	puts("Meal Plans:");
	puts("A - Breakfast, Lunch, and Dinner");
	puts("B - Lunch and Dinner only");
	puts("C - Dinner only");
	printf("Your choice: ");
	ret = scanf("%c",&choice); 
	if(ret != 1)
		fprintf(stderr, "scanf return value is %i\n", ret);
	printf("You’ve opted for ");
	switch(choice)
	{
		case 'A':
			printf("Breakfast, ");
		case 'B':
			printf("Lunch and ");
		case 'C':
			printf("Dinner ");
		default:
			printf("Unkown Option ");
	}
	printf("as your meal plan.\n");
	return 0 ;
}

