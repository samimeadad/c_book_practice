#include<stdio.h>

double find_avg(int ara[], int n);

int main(void)
{
    int ara[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 11;

    double avg = find_avg(ara, n);

    printf("%.2lf", avg);

    return 0;
}


double find_avg(int ara[], int n)
{
    double avg;
    int i;

    avg = 0;

    for(i=0; i<n; i++)
        avg += ara[i];

    avg = avg/n;

    return avg;
}
