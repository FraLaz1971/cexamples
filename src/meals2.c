#include <stdio.h>
int main()
{
	char choice; int ret, condition;
	choice = 0;
	do {
	puts("Please select one of the following Meal Plans:");
	puts("A - Breakfast, Lunch and Dinner");
	puts("B - Lunch and Dinner only");
	puts("C - Dinner only");
	printf("Your choice: ");
	ret = scanf("%c",&choice);
	condition = ((choice == 'A') || (choice == 'B') || (choice == 'C'));
	} while(!condition);
	if(ret != 1)
		fprintf(stderr, "scanf return value is %i\n", ret);
	#ifdef DEBUG
		fprintf(stderr, "condition = %i\n", condition);
		fprintf(stderr, "choice = %i\n", choice);
	#endif
	printf("You’ve opted for ");
	switch(choice)
	{
		case 'A':
			printf("Breakfast, Lunch and Dinner ");
			break;
		case 'B':
			printf("Lunch and Dinner Only ");
			break;
		case 'C':
			printf("Dinner Only ");
			break;
		default:
			printf("Unkown Option ");
	}
	printf("as your meal plan.\n");
	return 0 ;
}

