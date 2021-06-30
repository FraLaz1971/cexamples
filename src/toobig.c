/* toobig.c-exceeds maximum int size on our system */
#include <stdio.h>
int main(void)
{
int i = 2147483647;
unsigned int j = 4294967295;
printf("signed int   --> %d\t%d\t%d\n", i, i+1, i+2);
printf("unsigned int --> %u\t%u\t\t%u\n", j, j+1, j+2);
return 0;

}
