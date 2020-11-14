#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int methusage;
    int yourage;
    char years[8];
    printf("How old are you?");
    gets(years);
    yourage=atoi(years);
    printf("How old was Methuselah?");
    gets(years);
    methusage=atoi(years);
    printf("You are %d years old.\n",yourage);
    printf("Methuselah was %d years old.\n",methusage);
    if (methusage - yourage > 0)
        printf("you and methus would had %d years difference\n", methusage-yourage);
    else
        printf("you and methus would had %d years difference\n", yourage-methusage);        
    return(0);
}
