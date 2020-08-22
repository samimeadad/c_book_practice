#include<stdio.h>

int main(void)
{
    int a, b;

    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);

    printf("\n%d+%d = %d\n", a, b, a+b);
    printf("%d-%d = %d\n", a, b, a-b);
    printf("%d*%d = %d\n", a, b, a*b);
    printf("%d/%d = %d\n", a, b, a/b);

    return 0;
}
