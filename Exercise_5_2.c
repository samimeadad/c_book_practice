#include<stdio.h>

int main(void)
{
    double c, f;

    printf("Temperature in Farenheit = ");
    scanf("%lf", &f);

    c = (f-32)/1.8;

    printf("Temperature in Celcius = %.2lf\n", c);

    return 0;
}
