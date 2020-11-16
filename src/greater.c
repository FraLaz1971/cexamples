#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char temp[10];int ret; 
void PAUSE();

int main()
{
    char a,b, f;a='\0'; b='\0';
    printf("Which character is greater?\n");
    printf("\nType a single character (and then ENTER):");
    a=getchar(); 
    f=getchar(); /* this flushes the linefeed char*/
    printf("\nType another character (and then ENTER):");
    b=getchar();
    f=getchar(); /* this flushes the linefeed char*/
    fflush(stdin);
    if(a > b)    {
        printf("'%c' is greater than '%c'!\n",a,b);
    }    else if (b > a)    {
        printf("'%c' is greater than '%c'!\n",b,a);
    }    else    {
        printf("Next time, don't type the same character twice.\n");
    }
    PAUSE();
    puts("Bye.");
    return(0);

}

void PAUSE(){
        puts("please, type a key and then enter\n");
        ret = scanf("%s", temp);
}
