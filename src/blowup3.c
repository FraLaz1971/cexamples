#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char temp[10]="";int ret;char c1;
void PAUSE();

int main()
{
    char c;
    printf("Would you like your computer to explode?");
    c=getchar();
    if( (c=='Y') || (c=='y'))
    {
    printf("OK: Configuring computer to explode now.\n");
    printf("Bye!\n");
    }
    else
    {
    printf("Okay. Nothing will explode. Whew!\n");
    }
    PAUSE();
    return(0);
}

void PAUSE(){
        #ifdef __GNUC__
            __fpurge(stdin);
            fprintf(stderr, "debug: compiled with GNU C, added __fpurge(stdin)\n");
        #endif
        puts("please, type a key and then enter\n");
        ret = scanf("%s", temp);
}
