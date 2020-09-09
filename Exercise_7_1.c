#include<stdio.h>

int find_min(int ara[], int n);

int main(void)
{
    int ara[] = {-101, 0, 53, 22, 83, 23, 89, 332, -202, 3, 85};
    int n = 11;

    int min = find_min(ara, n);

    printf("%d", min);

    return 0;
}


int find_min(int ara[], int n)
{
    int min, i;

    min = ara[0];

    for(i=0; i<n; i++)
        if(ara[i]<min)
            min = ara[i];

    return min;
}
