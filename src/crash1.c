/* this program crashes and explain how to use gdb debugger 
to know the reason why (array index out of limits) 
see http://www.mathcs.emory.edu/~cheung/Courses/255/Syllabus/1-C-intro/debugger.html
*/
#define WRONGINDEX -872625577 
/* #define WRONGINDEX 9 */
#include <stdio.h>
int main(int argc, char *argv[])
   {
      int a[10];
      int i = WRONGINDEX;

      a[i] = 1234;
      printf("i = %d\n", i);
      printf("a[i] = %d\n", a[i]);
	return 0;
   }

