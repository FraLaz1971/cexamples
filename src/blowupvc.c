#include <stdio.h>
int main()
{
    char c,d, e;
    printf("Enter the character code for self-destruct (and then ENTER)? ");
    c=getchar();
    e=getchar();
    /* use fpurge(stdin) in unix */
    printf("Input number code to confirm self-destruct (and then ENTER)?");
    d=getchar();
    if(c=='G' && d=='0')
    {
        printf("AUTO DESTRUCT ENABLED!\n");
        printf("Bye!\n");
    }
    else
    {
        printf("Okay. Whew!\n");
    }
    return(0);
}
