#include<stdio.h>

int add(int num1, int num2)
{
    double sum = num1 + num2;
    return sum;
}

int main(void)
{
    double a, b, c;

    a = 2.8;
    b = 3.7;
    c = add(a, b);

    printf("%.2lf\n", c);

    return 0;
}
