#include<stdio.h>

int main(void)
{

    int i = 1;
    while (i<=100)
    {
        printf("%d\n", i);
        i++;
        if(i>10)
            break;
    }
    return 0;
}
