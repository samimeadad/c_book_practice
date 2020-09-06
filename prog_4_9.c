#include<stdio.h>

int main(void)
{

    int n = 5, i;
    int m = 0;

    for(i=1; i<=10; i++)
    {
        m = m + n;
        printf("%d * %d = %d\n", n, i, m);
    }
    return 0;
}
