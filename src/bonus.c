#include <stdio.h>
float bonus(char x);

int main()
{
	char name[20];
	char level;
	float b;
	printf("Enter employee name:");
	gets(name);
	printf("Enter bonus level (0, 1 or 2):");
	level=getchar();
	b=bonus(level);
	b*=100;
	printf("The bonus for %s will be $%.2f.\n",name,b);
	return(0);
}

/* Calculate the bonus */
float bonus(char x)
{
	if(x=='0') return(0.33);
	if(x=='1') return(1.50);
	return(3.10);
}

