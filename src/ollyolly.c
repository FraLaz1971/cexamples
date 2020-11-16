#include <stdio.h>
char t[10]; int r;
int main()
{
    int count;
    for(count=10;count>0;count=count-1)
    printf("%d\n",count);
    printf("Ready or not, here I come!\n");
    printf("Press a key and then ENTER to close the terminal\n");
    r = scanf("%s", t);
    return(0);
}
