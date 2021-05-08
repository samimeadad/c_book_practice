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

    if(total_marks>=97)
        printf("\nYou have got A+");
    else if(total_marks>=90 && total_marks<97)
        printf("\nYou have got A");
    else if(total_marks>=85 && total_marks<90)
        printf("\nYou have got B+");
    else if(total_marks>=80 && total_marks<85)
        printf("\nYou have got B");
    else if(total_marks>=70 && total_marks<80)
        printf("\nYou have got C");
    else if(total_marks>=60 && total_marks<70)
        printf("\nYou have got D");
    else
        printf("\nYou Fail");

    return 0;
}
