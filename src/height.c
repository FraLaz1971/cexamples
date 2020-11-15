#include <stdlib.h>
#include <stdio.h>

float cm_to_inches(float cm);
float inches_to_cm(float in);

int main()
{
	float height_in_cm, height_in_in;
	char height_in_inches[4];
	char sheight_in_cms[4]; int a;
	printf("Enter your height in cm:");
	gets(sheight_in_cms);
	height_in_in = atoi(sheight_in_cms)/2.54;
	printf("You are %.2f inches tall.\n",height_in_in);
	printf("Enter your height in inches:");
	gets(height_in_inches);
	height_in_cm = atoi(height_in_inches)*2.54;
	printf("You are %.2f centimeters tall.\n",height_in_cm);
	a=1;
	printf("%i cm is %.2f inches \n", a, cm_to_inches(a));
	printf("%i inch is %.2f cm \n", a, inches_to_cm(a));
	a=10;
	printf("%i cm are %.2f inches \n", a, cm_to_inches(a));
	printf("%i inches are %.2f cm \n", a, inches_to_cm(a));
	a=100;
	printf("%i cm are %.2f inches \n", a, cm_to_inches(a));
	printf("%i inches are %.2f cm \n", a, inches_to_cm(a));
	return 0;
}

float cm_to_inches(float cm){
	return cm/2.54;
}

float inches_to_cm(float in){
	return in*2.54;
}
