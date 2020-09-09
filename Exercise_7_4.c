#include<stdio.h>

double circle_area(int r);
double pi = 3.14;
double area;

int main(void)
{
    int radius;

    printf("Radius of the Circle = ");
    scanf("%d", &radius);

    area = circle_area(radius);

    printf("Area of the Circle = %.2lf\n", area);

    return 0;
}


double circle_area(int r)
{
    area = pi*r*r;

    return area;
}
