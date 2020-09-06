#include<stdio.h>

int main(void)
{
    int a, b, x, gcd;

    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    if(a<b)
        x = a;
    else
        x = b;

    /*while (x>=1)
    {
        if(a%x==0 && b%x==0)
        {
            gcd = x;
            break;
        }
        else
            x--;
    }*/

    for(; x>=1; x--)
    {
        if(a%x==0 && b%x==0)
        {
            gcd = x;
            break;
        }
    }
    printf("GCD = %d", gcd);

    return 0;
}
