#include<stdio.h>
#include <stdlib.h>
int main()
{
    int job_start_age, job_stop_age, death_age, monthly_salary, contrib_rate;
    int ycontributed, yreceived, monthly_income, tot_pmonths, total_received;
    float monthly_contrib, total_paid; int tot_cmonths;
    printf("enter age of death:");
    if(scanf("%i", &death_age) > 1) fprintf(stderr, "entered more than 1 value\n");
    printf("enter age of job start:");
    if(scanf("%i", &job_start_age) > 1) fprintf(stderr, "entered more than 1 value\n");
    printf("enter age of job stop:");
    if(scanf("%i", &job_stop_age) > 1) fprintf(stderr, "entered more than 1 value\n");
    printf("enter monthly salary($):");
    if(scanf("%i", &monthly_salary) > 1) fprintf(stderr, "entered more than 1 value\n");
    printf("enter contribution rate(%%):");
    if(scanf("%i", &contrib_rate) > 1) fprintf(stderr, "entered more than 1 value\n");
    printf("\ncitizen started his job at %i years.\n",job_start_age);
    printf("citizen stopped to work at %i years.\n",job_stop_age);
    printf("citizen died at %i years.\n",death_age);
    printf("citizen monthly salary was %i$.\n", monthly_salary);
    ycontributed=job_stop_age-job_start_age; /* years during which he contributed */
    yreceived=death_age-job_stop_age;   /* years during which he recived */
    monthly_income=monthly_salary*0.75; /* minimum monthly social income ($) */
    if (monthly_income < 500) monthly_income = 500;
    tot_pmonths=yreceived*12; /* total number of months of installments */
    total_received=monthly_income*tot_pmonths; /* how much social security payed */
    total_paid=monthly_contrib*tot_pmonths; /* how much citizen paid to social security */
    monthly_contrib = monthly_salary*(contrib_rate/100.0);
    tot_cmonths = 12 * ycontributed;
    total_paid = tot_cmonths*monthly_contrib;
    printf("citizen monthly contribution rate was %i%%.\n", contrib_rate);
    printf("citizen paid monthly to social security %.2f$.\n", monthly_contrib);
    printf("citizen contributed to Social Security for %i years.\n",ycontributed);
    printf("citizen collected from Social Security for %i years.\n",yreceived);
    printf("citizen paid %.2f$ in contribution to Social security\n", total_paid);
    printf("citizen received %i monthly pension installments, 500$ each\n", tot_pmonths);
    printf("for a total of %i$\n", total_received);
    return 0;
}

