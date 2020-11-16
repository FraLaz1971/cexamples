#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char temp[10]="";int ret; 
void PAUSE();

int main()
{
    char c;
    printf("Would you like your computer to explode?");
    c=getchar();
    if(c=='Y')
    {
    printf("OK: Configuring computer to explode now.\n");
    printf("Bye!\n");
    }
    else if(c=='y')
    {
    printf("OK: Configuring computer to explode now.\n");
    printf("Bye!\n");
    }
    else
    {
    printf("Okay. Whew!\n");
    }
    return(0);
}

void PAUSE(){
        __fpurge(stdin);
        puts("please, type a key and then enter\n");
        ret = scanf("%s", temp);
}
