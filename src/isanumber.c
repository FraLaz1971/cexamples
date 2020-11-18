#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isanumber(char s[]);

int main ()
{
    char snum[256]=""; int num; long int ret;
    fprintf(stderr, "please, type a number and then enter\n");
    ret = scanf("%s",snum); num=atoi(snum);
    fprintf(stderr, "you entered %s\n", snum);
    fprintf(stderr, "length of the scanned string is %li\n", strlen(snum));
    if ( isanumber(snum) )
        fprintf(stderr, "%s can be accepted as number \n", snum);
    else
        fprintf(stderr, "%s cannot be accepted as a number \n", snum);
    fprintf(stderr, "number acquired is %i\n", num);
    return 0;
}

int isanumber(char s[] ){
        fprintf(stderr, "first characters in string is %c\n", s[0]);
        if ( (s[0] >= 48) && ((s[0] <= 57)) )
            return 1;
        else
            return 0;
}
