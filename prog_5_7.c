#include<stdio.h>

int main(void)
{
    double c, f;

    printf("Temperature in Celcius = ");
    scanf("%lf", &c);

    f = c*1.8+32;

    printf("Temperature in Farenheit = %.2lf\n", f);

    return 0;
}
