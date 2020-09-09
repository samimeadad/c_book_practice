#include<stdio.h>

int find_sum(int ara[], int n);

int main(void)
{
    int ara[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    int sum = find_sum(ara, n);

    printf("%d", sum);

    return 0;
}


int find_sum(int ara[], int n)
{
    int sum, i;

    sum = 0;

    for(i=0; i<n; i++)
        sum += ara[i];

    return sum;
}
