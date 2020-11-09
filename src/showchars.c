#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* shows size and range of char data type*/
int main(){
	char c; double low, up;
	int bs = sizeof(c); /* size in bytes */
	printf("# size of char is %d byte\n", bs);
    	low=-(pow(2,(bs*8-1)));up=(pow(2,(bs*8-1))-1);
	printf("# %f << c << %f\n", low, up);
	for(c=low; c<up; c++)
		printf("%d\n", c);
	printf("%d\n", c);
	return 0;
}
