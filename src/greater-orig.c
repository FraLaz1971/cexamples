#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char temp[10];int ret; 
void PAUSE();

int main()
{
    char a,b, f;a='\0'; b='\0';
    printf("Which character is greater?\n");
    printf("If you are on GNU/Linux or Apple MacOS or MS win msys2/cygwin \n"); 
    printf("type CTRL-D after the character you typed to enter it\n\n");
    printf("If you are on Microsoft Windows cmd or you click on the exe icon in explorer\n"); 
    printf("type CTRL-Z and then ENTER key\n"); 
    printf("after the character you typed to enter it\n");
    printf("\nType a single character:");
    a=getchar(); 
    printf("\nType another character:");
    b=getchar();
    if(a > b)    {
        printf("\n'%c' is greater than '%c'!\n",a,b);
    }    else if (b > a)    {
        printf("\n'%c' is greater than '%c'!\n",b,a);
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
