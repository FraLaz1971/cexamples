#include <stdio.h>
int main()
{
    char kitty[20], kitty2[20], kitty3[20]; int ret;
    printf("What would you like to name your cat?");
    ret = scanf("%s", kitty);
    fprintf(stderr, "\nyou entered %d elements \n", ret);
    fprintf(stdout, "\n%s is a nice name.\nWhat else do you have in mind?",kitty);
    ret = scanf("%s %s", kitty2, kitty3);
    fprintf(stderr,"\nyou entered %d elements \n", ret);
    printf("\n\"%s %s\" is nice, too.\n",kitty2, kitty3);
    return(0);
}
