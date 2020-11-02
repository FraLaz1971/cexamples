#include <stdio.h>

int main()
{
   char me[20];
   char you[20];
   printf("What is your name?");
   scanf("%s" ,&me);
   printf("What is her name?");
   scanf("%s" ,&you );
   printf("Alita glad to meet you. %s and %s!\n" ,me,you);
   return 0;
}
