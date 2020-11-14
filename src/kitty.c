#include <stdio.h>
int main()
{
    char kitty[20]; int *ret;
    printf("What would you like to name your cat?");
    ret = fgets(kitty, 20, stdin);
    printf("%s is a nice name. What else do you have in mind?",kitty);
    ret = fgets(kitty, 20, stdin);
    printf("%s is nice, too.\n",kitty);
    return(0);
}
