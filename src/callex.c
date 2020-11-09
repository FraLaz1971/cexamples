#include <stdio.h>
void  iswap(int *a, int *b){
    /* Local variables */
      int tmp;
      tmp = *a;
      *a = *b;
      *b = tmp;
}

int main(){ 
    int m, n;
/* */
      m = 1;
      n = 2;

      puts("before swap");
      printf("%i  %i\n", m, n);
      iswap(&m, &n);
      printf("%i  %i\n", m, n);
      puts("after swap");
    return 0;
}

