#include <stdio.h>
int main()
{
    char kitty[20]; int *ret;
    printf("What would you like to name your cat?");
    gets(kitty);
    printf("%s is a nice name. What else do you have in mind?",kitty);
    gets(kitty);
    printf("%s is nice, too.\n",kitty);
    return(0);
}
