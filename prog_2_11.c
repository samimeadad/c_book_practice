#include<stdio.h>

int main(void)
{
    double a, b, sum;

    scanf("%lf", &a);
    scanf("%lf", &b);

    sum = a + b;

    printf("Sum = %0.2lf\n", sum);

    return 0;
}
