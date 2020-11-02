#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MATCHING  0
#define DIFFERENT 1

char man[10]="";
char woman[10]=""; int ret1, ret2;

int main()
{
   int i;
   printf("What is your name?");
   ret1 = scanf("%s" , (char *) &man);
   printf("What is her name?");
   ret2 = scanf("%s" , (char *) &woman );
   if ( (strcmp(man, "Alessandro") == MATCHING ) && (strcmp(woman, "Anna") == MATCHING) )
   	printf("Fuck you %s and %s! Pieces of shit!\n" ,man,woman);
   else
   	printf("Hey glad to meet you. %s and %s!\n" ,man,woman);
   return 0;
}
