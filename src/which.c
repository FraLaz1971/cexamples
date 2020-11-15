#include <stdio.h>
int main()
{
	char key;
	printf("Press a key on your keyboard, and then enter:");
	key=getchar();
	printf("You pressed the '%c' key.\n",key);
	printf("Its ASCII value is %d.\n",key);
	return(0);
}

