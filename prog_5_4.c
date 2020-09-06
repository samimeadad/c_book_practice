#include<stdio.h>

int main(void)
{
    double loan_amount, int_rate, year, month, total_amount, installment;

    printf("Loan Amount = ");
    scanf("%lf", &loan_amount);

    printf("Interest Rate = ");
    scanf("%lf", &int_rate);

    printf("Year = ");
    scanf("%lf", &year);

    total_amount = loan_amount + (loan_amount*int_rate*year)/100.00;
    installment = total_amount/(year*12);

    printf("Total Amount for %0.0lf year = %.2lf\n", year, total_amount);
    printf("Monthly Installment = %.2lf\n", installment);

    return 0;
}
