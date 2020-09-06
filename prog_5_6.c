#include<stdio.h>

int main(void)
{
    int n, sum, i;

    printf("Number = ");
    scanf("%d", &n);

    sum = 0;

    for(i=1; i<=n; i++)
        sum = sum + i;
    printf("Summation of the series = %d\n", sum);

    return 0;
}
