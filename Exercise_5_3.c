#include<stdio.h>

int main(void)
{
    int a, b, x, t, a2, b2, gcd, lcm;

    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    a2 = a;
    b2 = b;

    if(a2 == 0)
        gcd = a2;
    else if(b2 == 0)
        gcd = b2;
    else
    {
        while(b2!=0)
        {
            t = b2;
            b2 = a2%b2;
            a2 = t;
        }
        gcd = a2;
    }

    lcm = (a*b)/gcd;

    printf("GCD = %d", gcd);
    printf("\nLCM = %d", lcm);

    return 0;
}
