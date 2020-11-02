#include <stdio.h>

int main()
{
   char first[20];
   char woman[20];
   char color[20];

   printf("What is your name?");
   scanf("%s" ,(char *)first);
   printf("And what is her name?");
   scanf("%s" ,(char *)woman);
   printf("Hey, glad to meet you %s and %s!\n" ,first,woman);
   printf("hear me, %s , what is your favorite color?", first);
   scanf("%s",(char *)color);
   printf("%s 's favorite color is %s\n" ,first, color);

	return 0;
}

