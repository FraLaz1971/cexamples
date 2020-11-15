#include <stdio.h>
#include <stdlib.h>

#define MLINKM 1.609344 /* one mile is ~1.6 km */
#define MAU 149597870700.0 /* Astronomical Unit constant in meters */
#define JY 365.25 /* one Julian Year is 365 days and 6 hours */
#define MLY 9.4607E15 /* light year in meters (SI) */
/* global constant variables */
const double mjupiterdist = 483400000.0; /* avg. distance of Jupiter from the sun in miles */
const double jupiterdist = 778.57E9; /* avg. distance of Jupiter from the sun in m (SI) */
const double mlightyear = 5.878E12;    /* light year distance in miles */

/* global variables */
int a;

/* functions definition */
double miles_to_km(double mv); /* given miles it returns km */
double km_to_miles(double kv); /* given km it returns miles */
void show_conversions();       /* shows used conversion factors */

int main() {
	double jlydistance; /* avg. distance of Jupiter from the sun in light years */
	double jaudistance; /* avg. distance of Jupiter from the sun in Astronomical Units */
	jlydistance = mjupiterdist/mlightyear; /* compute Jupiter distance in LY */
	jaudistance = jupiterdist/MAU; /* compute Jupiter distance in AU */
	show_conversions();
	printf("Jupiter is %.0f miles from the sun.\n",mjupiterdist);
	printf("Jupiter is %.0f km from the sun.\n",jupiterdist/1000.0);
	printf("Jupiter is %f light years from the sun.\n",jlydistance);
	printf("Jupiter is %e light years from the sun.\n",jlydistance);
	printf("Jupiter is %E light years from the sun.\n",jlydistance);
	printf("Jupiter is %f AU from the sun.\n",jaudistance);
	printf("1 light year is %E miles\n",mlightyear);
	printf("1 light year is %E km\n",miles_to_km(mlightyear));
	printf("1 light year is %.3f AU\n",MLY/MAU);
	printf("1 AU is %.3f km\n",MAU/1000.0);
	printf("1 AU is %.3f miles\n",km_to_miles(MAU/1000.0));
	return 0;
}

/* functions implementation */

double miles_to_km(double mv){
    return mv*MLINKM;
}

double km_to_miles(double kv){
    return kv/MLINKM;
}

void show_conversions(){
        puts("**** USED CONVERSIONS START ****");
        a = 1;
        printf("%i mile is %f km\n", a, miles_to_km(a));
        a = 10;
        printf("%i miles are %f km\n", a, miles_to_km(a));
        a = 1;
        printf("%i km is %f miles\n", a, km_to_miles(a));
        a = 10;
        printf("%i km are %f miles\n", a, km_to_miles(a));
        a = 1;
        printf("%i AU is %.3f km\n", a, (a*MAU)/1000.0 );
        printf("%i AU is %.f m\n", a, a*MAU );
        printf("%i AU is %.0f miles\n", a, km_to_miles((a*MAU)/1000) );
        puts("**** USED CONVERSIONS STOP ****");
}
