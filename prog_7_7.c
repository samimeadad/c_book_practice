#include<stdio.h>

int find_max(int x[], int y);

int main(void)
{
    int ara[] = {-101, 0, 53, 22, 83, 23, 89, 332, 202, 3, 85};
    int n = 11;

    int max = find_max(ara, n);

    printf("%d", max);

    return 0;
}


int find_max(int x[], int y)
{
    int z, i;

    z = x[0];

    for(i=0; i<y; i++)
        if(x[i]>z)
            z = x[i];

    return z;
}
