#include<stdio.h>

int main(void)
{

    int n = 5;
    int i = 1;

    for(;;)
    {
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
        if(i>10)
            break;
    }

    return 0;
}
