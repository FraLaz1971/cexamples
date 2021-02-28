/* sums.c 
 * author: Francesco Lazzarotto 
 * date: 2021-02-28
 * email: fralaz1971@gmail.com     
 * version: 0.0.1
 * this program compute a sum of the first n integers
 * taking n from standard input
 */
#include <stdio.h>
int main(){
        int i, n, sum, ret;
        sum = 0;
        /* present program on beginning output screen */
        puts("*****************************");
        puts("**         sums.c          **");
        puts("** summing first n numbers **");
        puts("*****************************");
        /* prompt input request to user */
        printf("Please, type an integer in [1:+INF)\n");
    /* ret variable is scanf() Return Value and can be used for error handling. 
    * On success, the function returns the number of items of the argument list successfully read. 
    * If a reading error happens or the end-of-file is reached while reading, 
    * the proper indicator is set (feof or ferror) and, if either happens before any data could be
    * successfully read, EOF is returned. (thanks to www.tutorialspoint.com) */ 
        ret = scanf("%d", &n);
        /* do iteration loop on i from 1 to n
         of code included between curly brackets */
        for (i = 1;i<=n;i++){
            sum = sum + i;
            printf("i = %i sum = %d\n", i, sum);
        }
        /* print result on final output screen */
        puts("**************************************************");
        printf("** The sum of the first %d numbers is %i\n",i-1, sum);
        puts("**************************************************");
        puts("End of the program. Bye.");
        return 0;
}
