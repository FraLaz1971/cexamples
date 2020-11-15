#include <stdio.h>
int main()
{
	char key, wait[10]; int ret;
	printf("Type your favorite keyboard character:");
	ret = scanf("%c",&key);
	printf("Your favorite character is %c!\n",key);
	printf("press a key and then enter to close:");
	ret = scanf("%s",wait);
	return 0;
}
