#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int age;
    char years[8];
    printf("How old was Methuselah?");
    gets(years);
    age=atoi(years);
    printf("Methuselah was %d years old.\n",age);
    return 0;
}
