#include<stdio.h>
#include <stdlib.h>
int main()
{
    int ycontributed, yreceived, monthly_income, tot_months, total_payed;
    ycontributed=65-19; /* years during which he contributed */
    yreceived=969-65;   /* years during which he recived */
    monthly_income=500; /* minimum monthly social income ($) */
    tot_months=yreceived*12; /* total number of months of installments */
    total_payed=monthly_income*tot_months; /* how much social security payed */
    printf("Methuselah contributed to Social Security for %i years.\n",ycontributed);
    printf("Methuselah collected from Social Security for %i years.\n",yreceived);
    printf("Methuselah received %i monthly pension installments, 500$ each\n", tot_months);
    printf("for a total of %i $\n", total_payed);
    return 0;
}

