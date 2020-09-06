#include<stdio.h>

int main(void)
{

    int n = 5, i;

    i = 1;
    while(i<=10)
    {
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }

    return 0;
}
