#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* name;
	char* color;
	int ret;
	name =  (char *)malloc(20*sizeof(char));
	color = (char *)malloc(20*sizeof(char));
	printf("What is your name?");
	ret = scanf("%s",name);
	printf("What is your favorite color?");
	ret = scanf("%s",color);
	printf("%s’s favorite color is %s\n",name,color);
	return 0;
}
