#include <stdio.h>
/*
this is our first program c language version
of F77 first program in "A structured approach to FORTRAN 77 programming"
Ellis,1982 (fig 1.2, pag.11)
*/
int main()
{
    float a, b, sum;
    int ret;
    printf("please, enter 2 numbers (separated by space)\n");
    ret = scanf("%f %f", &a, &b);
    printf("read %i numbers\n",ret);
    sum = a + b;
    printf("The sum of %g and %g is %g\n",a,b,sum);
    return 0 ;
}


