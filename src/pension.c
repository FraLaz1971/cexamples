/* scanf use and simple computation example 
 * need 6 input values on stdin
 * citizen-name death-age job-start-age job-stop-age monthly-salary contribution-rate
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /* variables to be read from stdin */
    int job_start_age=0, job_stop_age=0, death_age=0, monthly_salary=0, contrib_rate=0; char citizen[64];
    int ycontributed, yreceived,  tot_pmonths, total_received;
    float monthly_contrib, total_paid,monthly_income; int tot_cmonths;
    printf("enter name of Citizen (without any space):");

    if(scanf("%s", citizen) != 1) fprintf(stderr, "read data warning\n");

    printf("enter age of death:");
    if(scanf("%i", &death_age) != 1) fprintf(stderr, "read data warning\n");

    if (death_age < 0 ){
        fprintf(stderr, "input error: wrong death age!\n");
        return 1;
    }
        
    printf("enter age of job start:");
    if(scanf("%i", &job_start_age) != 1) fprintf(stderr, "read data warning\n");

    if (job_start_age > death_age ){
        fprintf(stderr, "input error: inconsistant death and job start ages !\n");
        return 1;
    }

    if (job_start_age < 0 ){
        fprintf(stderr, "input error: wrong job start age!\n");
        return 1;
    }

    
    printf("enter age of job stop:");
    if(scanf("%i", &job_stop_age) != 1) fprintf(stderr, "read data warning\n");
    
    if (job_stop_age < 0 ){
        fprintf(stderr, "input error: wrong job stop age!\n");
        return 1;
    }

    if (job_stop_age < job_start_age ){
        fprintf(stderr, "input error: job start age is greater than job stop age!\n");
        return 1;
    }
    
    if (job_stop_age > death_age ){
        fprintf(stderr, "input error: inconsistant death and job stop ages !\n");
        return 1;
    }
    
    printf("enter monthly salary($):");
    if(scanf("%i", &monthly_salary) != 1) fprintf(stderr, "read data warning\n");

    if (monthly_salary < 0 ){
        fprintf(stderr, "input error: wrong monthly salary!\n");
        return 1;
    }

    
    printf("enter contribution rate(%%):");
    if(scanf("%i", &contrib_rate)  != 1) fprintf(stderr, "read data warning\n");
    if (contrib_rate < 0 ){
        fprintf(stderr, "input error: wrong contrib_rate !\n");
        return 1;
    }


    printf("\n%s started his job at %i years.\n", citizen,job_start_age);
    printf("%s stopped to work at %i years.\n", citizen,job_stop_age);
    printf("%s died at %i years.\n", citizen,death_age);
    printf("%s monthly salary was %i$.\n", citizen, monthly_salary);
    ycontributed=job_stop_age-job_start_age; /* years during which he contributed */
    yreceived=death_age-job_stop_age;   /* years during which he recived */
    tot_pmonths=yreceived*12; /* total number of months of installments */
    total_paid=monthly_contrib*tot_pmonths; /* how much %s paid to social security */
    monthly_contrib = monthly_salary*(contrib_rate/100.0);
    monthly_income=monthly_contrib*0.95; 
    /* minimum monthly social income ($) */
    if (monthly_income < 500) monthly_income = 500;

    tot_cmonths = 12 * ycontributed;
    total_paid = tot_cmonths*monthly_contrib;
    total_received=monthly_income*tot_pmonths; /* how much social security payed */
    printf("%s monthly contribution rate was %i%%.\n", citizen, contrib_rate);
    printf("%s paid monthly to social security %.2f$.\n", citizen, monthly_contrib);
    printf("%s contributed to Social Security for %i years.\n", citizen,ycontributed);
    printf("%s paid %.2f$ in contribution to Social security\n", citizen, total_paid);
    printf("%s collected from Social Security for %i years.\n", citizen,yreceived);
    printf("%s received %i monthly pension installments, %.2f each\n", citizen,tot_pmonths, monthly_income);
    printf("for a total of %i\n", total_received);
    return 0;
}

