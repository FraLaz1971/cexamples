#include<stdio.h>
#include <stdlib.h>
int main()
{
    int job_start_age, job_stop_age, death_age;
    int ycontributed, yreceived, monthly_income, tot_months, total_payed;
    printf("enter age of death:");
    if(scanf("%i", &death_age) > 1) fprintf(stderr, "entered more than 1 value\n");
    printf("enter age of job start:");
    if(scanf("%i", &job_start_age) > 1) fprintf(stderr, "entered more than 1 value\n");
    printf("enter age of job stop:");
    if(scanf("%i", &job_stop_age) > 1) fprintf(stderr, "entered more than 1 value\n");
    printf("\nMethuselah started his job at %i years.\n",job_start_age);
    printf("Methuselah stopped to work at %i years.\n",job_stop_age);
    printf("Methuselah died at %i years.\n",death_age);
    ycontributed=job_stop_age-job_start_age; /* years during which he contributed */
    yreceived=death_age-job_stop_age;   /* years during which he recived */
    monthly_income=500; /* minimum monthly social income ($) */
    tot_months=yreceived*12; /* total number of months of installments */
    total_payed=monthly_income*tot_months; /* how much social security payed */
    printf("Methuselah contributed to Social Security for %i years.\n",ycontributed);
    printf("Methuselah collected from Social Security for %i years.\n",yreceived);
    printf("Methuselah received %i monthly pension installments, 500$ each\n", tot_months);
    printf("for a total of %i$\n", total_payed);
    return 0;
}

