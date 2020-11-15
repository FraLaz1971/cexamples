#include <stdio.h>
int main()
{
	char key;
	fprintf(stderr, "Type your favorite keyboard character (and press enter):");
	if(scanf("%c",&key)>1) puts("read more then 1 input value");
	printf("%c\n",key);
	fprintf(stderr, "Your favorite character is '%c' !\n",key);
	return(0);
}
