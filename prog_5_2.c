#include<stdio.h>

int main(void)
{

    double a1, b1, c1, a2, b2, c2, x, y;

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c2 = ");
    scanf("%lf", &c2);

    x = (b2*c1-b1*c2)/(a1*b2-a2*b1);
    y = (a1*c2-a2*c1)/(a1*b2-a2*b1);

    printf("\nx = %.2lf, y = %.2lf\n", x, y);

    return 0;
}
