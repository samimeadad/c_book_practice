#include<stdio.h>

int main(void)
{
    int n, sum;

    printf("Number = ");
    scanf("%d", &n);

    sum = (n*(n+1))/2;

    printf("Summation of the series = %d\n", sum);

    return 0;
}
