#include <stdio.h>
int main()
{
    unsigned char a;
    for(a=32;a<128;a=a+1)
        printf("%3d/'%c'\t",a,a);
    if(a%10==2)
        printf("\n");
    return(0);
}
