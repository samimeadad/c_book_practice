#include<stdio.h>

int main(void)
{
    int ft_marks[10] = {88, 83, 78, 98, 90, 76, 85, 80, 89, 79};
    int st_marks[10] = {74, 95, 88, 82, 76, 81, 75, 78, 81, 83};
    int final_marks[10] = {98, 88, 85, 76, 97, 89, 94, 88, 86, 88};
    double total_marks[10];
    int i;

    for(i=0; i<10; i++)
    {
        total_marks[i] = ft_marks[i]*0.25 + st_marks[i]*0.25 + final_marks[i]*0.5;
    }

    for(i=0; i<10; i++)
        printf("ROLL NO: %d \tTotal Marks = %.2lf\n", i+1, total_marks[i]);

    return 0;
}
