//	this x program compute a sum of the first n integers
//   taking n as input given on standard input
#include <stdio.h>
int main(){
		int i, n, sum, ret;
		sum = 0;
// present program on beginning output screen
        puts("*****************************");
        puts("**         sums.f          **");
        puts("** summing first n numbers **");
        puts("*****************************");
// prompt input request to user
        printf("Please, type an integer in [1:+INF)\n");
        scanf("%d", &n);
        // do iteration loop on i from 1 to n
        // of code included between 10 and 10 labels
		for (i = 1;i<=n;i++){
			sum = sum + i;
			printf("i = %i sum = %d\n", i, sum);
        }
        // print result on final output screen
        puts("**************************************************");
        printf("** The sum of the first %d numbers is %i\n",i-1, sum);
        puts("**************************************************");
        puts("End of the program. Bye.");
		return 0;
}
