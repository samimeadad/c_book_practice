#include<stdio.h>

int main(void)
{
    double ft_marks, st_marks, final_marks, total_marks;

    printf("First Term Marks = ");
    scanf("%lf", &ft_marks);

    printf("Second Term Marks = ");
    scanf("%lf", &st_marks);

    printf("Final Makrs = ");
    scanf("%lf", &final_marks);

    total_marks = final_marks*0.5 + ft_marks*0.25 + st_marks*0.25;

    printf("Total Marks = %.2lf\n", total_marks);

    return 0;
}
