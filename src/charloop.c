#include <stdio.h>

int main(){
	unsigned char c;
	for (c=0; c<255; c++)
		printf("%i ", c);
	printf("%i ", c);
	c++;
	printf("%i ", c);
	c++;
	printf("%i ", c);
	return 0;
}

