#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char temp[3]="cat";
	printf("temp is %s\n", temp);
	temp[0]='d';
	temp[1]='o';
	temp[2]='g';
	printf("now temp is %s\n", temp);
	return 0;
}
