#include <stdio.h>
#include <stdlib.h>

int *ivec;

int *  iswap(int a, int b){
    ivec = malloc(2*sizeof(int));
    /* Local variables */
      int tmp;
      tmp = a;
      a = b; *ivec = a;
      b = tmp; *(ivec+1) = b;
      return ivec; 
}

int main(){ 
    int m, n,  *retvec=malloc(2*sizeof(int));
/* */
      m = 1;
      n = 2;

      puts("before swap");
      printf("%i  %i\n", m, n);
      retvec = iswap(m, n);
      printf("%i  %i\n", m, n);
      puts("after swap");
      printf("%i  %i\n", *retvec, *(retvec+1));
    return 0;
}

