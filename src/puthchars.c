#include <stdio.h>
int main()
{
	char c;
	puts("Soon I will show you all the ascii code printable characters.");
	puts("Press Enter:");
	getchar();
	for(c=32; c<127; c=c+1)
		putchar(c);
	putchar('\n');
	return(0);
}
