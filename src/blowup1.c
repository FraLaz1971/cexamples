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
    if( (c=='N') || (c=='n') ) 
    {
        puts("Okay. Nothing will explode.");
        printf("Good Choice. Whew!\n");
    }   else {
        printf("OK: Configuring computer to explode now.\n");
        printf("Bye!\n");
    }
    PAUSE();
    puts("Bye.");
    return(0);

}

void PAUSE(){
        fflush(stdin);
        puts("please, type a key and then enter\n");
        ret = scanf("%s", temp);
}

