/* program to show how c strings work */
#include <stdio.h>

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int main(){
	char hisname[] = "Dan"; int cur;
	char myname[] = "Francesco";
	printf("1D array hisname[] has size %li \n", NELEMS(hisname));
	puts("now scanning hisname[] content");
	for(cur=0;cur<NELEMS(hisname);cur++)
		printf("hisname[%d] = '%c' ascii: %d\n", cur, hisname[cur], hisname[cur]);
	printf("1D array myname[] has size %li \n", NELEMS(myname));
	puts("now scanning myname[] content");
	for(cur=0;cur<NELEMS(myname);cur++)
		printf("myname[%d] = '%c' ascii: %d\n", cur, myname[cur], myname[cur]);
	return 0;
}
