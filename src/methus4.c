#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int diff;
    int methus;
    int you;
    char years[8];
    printf("How old are you?");
    gets(years);
    you=atoi(years);
    methus=969;
    /* Methuselah was 969 years old */
    diff=methus-you;
    printf("You are %d years younger than Methuselah.\n",diff);
    return(0);
}
