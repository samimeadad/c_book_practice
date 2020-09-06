#include<stdio.h>

int main(void)
{

    int i, j, m;

    for(i=1; i<=20; i++)
    {
        m = 0;
        printf("\n");
        for(j=1; j<=10; j++)
        {
            m = m + i;
            printf("%d * %d = %d\n", i, j, m);
        }
    }

    return 0;
}
