#include<stdio.h>

int main(void)
{
    int ft_marks[10] = {88, 83, 78, 98, 90, 76, 85, 80, 89, 56};
    int st_marks[10] = {74, 68, 88, 82, 82, 81, 75, 78, 81, 75};
    int final_marks[10] = {98, 82, 72, 76, 97, 89, 66, 88, 86, 65};
    double total_marks[10];
    int i, count, marks;

    for(i=0; i<10; i++)
    {
        total_marks[i] = ft_marks[i]*0.25 + st_marks[i]*0.25 + final_marks[i]*0.5;
    }

    for(i=0; i<10; i++)
        printf("ROLL NO: %d \tTotal Marks = %.2lf\n", i+1, total_marks[i]);

    for(marks=60; marks<=100; marks++)
    {
        count=0;
        for(i=0; i<10; i++)
        {
            if((int)total_marks[i] == marks)
                count++;
        }
        printf("Marks: %d Count = %d\n", marks, count);
    }

    return 0;
}
