#include<stdio.h>

int main(void)
{
    int a, b, v;
    char s;

    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);

    s = '+';
    v = a+b;
    printf("\n%d%c%d = %d\n", a, s, b, v);

    s = '-';
    v = a-b;
    printf("\n%d%c%d = %d\n", a, s, b, v);

    s = '*';
    v = a*b;
    printf("\n%d%c%d = %d\n", a, s, b, v);

    s = '/';
    v = a/b;
    printf("\n%d%c%d = %d\n", a, s, b, v);

    return 0;
}
