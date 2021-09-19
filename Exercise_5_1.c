#include <stdio.h>

int main(void)
{
    double loan_amount, int_rate, total_amount, monthly_installment;
    int year, month, i;

    printf("Loan Amount = ");
    scanf("%lf", &loan_amount);

    printf("Interest Rate = ");
    scanf("%lf", &int_rate);

    printf("Year = ");
    scanf("%d", &year);

    total_amount = loan_amount;

    for (i = 0; i < year; i++)
        total_amount = total_amount + (total_amount * int_rate) / 100;

    monthly_installment = total_amount / (year * 12);

    printf("Total Amount for %d year = %.2lf\n", year, total_amount);
    printf("Monthly Installment = %.2lf\n", monthly_installment);

    return 0;
}
