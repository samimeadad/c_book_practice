#include<stdio.h>

int main(void)
{
    int total_marks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    int marks_count[11];
    int i, j;

    for(i=0; i<12; i++)
        printf("ROLL NO: %d \tTotal Marks = %d\n", i+1, total_marks[i]);

    for(i=0; i<11; i++)
        marks_count[i] = 0;

    for(i=0; i<12; i++)
    {
        marks_count[total_marks[i]]++;
        for(j=0; j<=10; j++)
            printf("%d ", marks_count[j]);
    }

    return 0;
}