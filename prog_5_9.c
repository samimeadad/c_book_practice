#include<stdio.h>

int main(void)
{
    int a, b, x, t, gcd;

    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    if(a == 0)
        gcd = a;
    else if(b == 0)
        gcd = b;
    else
    {
        while(b!=0)
        {
            t = b;
            b = a%b;
            a = t;
        }
        gcd = a;
    }
    printf("GCD = %d", gcd);

    return 0;
}
