#include<stdio.h>

int main(void)
{
    int n=1000;
    printf("1st Value of n is %d\n", n);
    n = -21000;
    printf("2nd Value of n is %d\n", n);
    n=10000000;
    printf("3rd Value of n is %d\n", n);
    n=-10000000;
    printf("4th Value of n is %d\n", n);
    n=100020004000503;
    printf("5th Value of n is %d\n", n);
    n=-4325987632;
    printf("6th Value of n is %d\n", n);
    int max = 2147483647;
    printf("Maximum Value of an Integer Variable is %d\n", max);
    int min = -2147483648;
    printf("Minimum Value of an Integer Variable is %d\n", min);

    return 0;
}
