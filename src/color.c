#include <stdio.h>

int main()
{
   char man[20];
   char woman[20];
   char angel[20];
   char mcolor[20];
   char wcolor[20];
   char acolor[20];
   
   printf("What is his name?");
   if (scanf("%s", (char *)&man) != 1) {
     perror("Error while entering data\n");
     return (1);
    }

   printf("And what is her name?");
   if (scanf("%s" ,(char *)&woman) != 1) {
     perror("Error while entering data\n");
     return (1);
    }
   printf("Hey, glad to meet you %s and  %s!\n" ,man,woman);
   printf("hey you man, what is your favorite color?");
   if (scanf("%s",(char *)mcolor) != 1) {
     perror("Error while entering data\n");
     return (1);
    }
   printf("%s's favorite color is %s\n" ,man,mcolor);
   printf("hey you woman, what is your favorite color?");
   if (scanf("%s",(char *)wcolor) != 1) {
     perror("Error while entering data\n");
     return (1);
    }
   printf("%s's favorite color is %s\n" ,woman,wcolor);
   printf("Ehi, what is YOUR name?");
   if (scanf("%s" ,(char *)&angel) != 1) {
     perror("Error while entering data\n");
     return (1);
    }
   printf("Ciao, %s, nice to meet you, what is your favourite color?", angel);
   if (scanf("%s",(char *)acolor) != 1) {
     perror("Error while entering data\n");
     return (1);
    }
   printf("%s's favorite color is %s\n" ,angel,acolor);
   return 0 ;
}
