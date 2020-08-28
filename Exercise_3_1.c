#include<stdio.h>

int main(void)
{
    int n=3;
    int rem = 0;

    while(n >= 2)
        n = n-2;
    rem = n;

    if(rem == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
}
