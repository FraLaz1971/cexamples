#include <stdio.h>

int main(){
	char c; short int si; int i; long int li;
	long long int lli; float f; double d; long double ld;

	printf("size of char is %ld BYTES \n", sizeof(c));
	printf("size of short int is %ld BYTES \n", sizeof(si));
	printf("size of int is %ld BYTES \n", sizeof(i));
	printf("size of long int is %ld BYTES \n", sizeof(li));
	printf("size of long long int is %ld BYTES \n", sizeof(lli));
	printf("size of float is %ld BYTES \n", sizeof(f));
	printf("size of double is %ld BYTES \n", sizeof(d));
	printf("size of long double is %ld BYTES \n", sizeof(ld));
	return 0;
}
