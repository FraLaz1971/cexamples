#include <stdio.h>

int main() {
   printf("********************************\n");
   printf("** shows usage of ansi macros **\n");
   printf("********************************\n");
   printf("Source code File :%s\n", __FILE__ );
   printf("Compilation Date :%s\n", __DATE__ );
   printf("Compilation Time :%s\n", __TIME__ );
   printf("Code Line        :%d\n", __LINE__ );
   printf("Version of ANSI  :%d\n", __STDC__ );
   return 0;
}


