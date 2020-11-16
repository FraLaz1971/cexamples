#include <stdio.h>
int main()
{
    char ch;
    puts("Start typing");
    puts("Press CTRL-D (2 times) to stop");
    for(;;)
    {
        ch=getchar();
        if(ch==EOF)
        {
            break;
        }
    }
    printf("\nThanks!\n");
    return(0);
}
