#include<stdio.h>

int main(void)
{
    int total_marks[100];
    int marks_count[101];
    int i, n;

    printf("No. of students in the class: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Total Marks of Student %d = ", i+1);
        scanf("%d", &total_marks[i]);
    }

    for(i=0; i<n; i++)
        printf("ROLL NO: %d \tTotal Marks = %d\n", i+1, total_marks[i]);

    for(i=0; i<101; i++)
        marks_count[i] = 0;

    for(i=0; i<n; i++)
        marks_count[(int)total_marks[i]]++;

    for(i=0; i<=100; i++)
        if(marks_count[i] != 0)
            printf("Marks: %d Count: %d\n", i, marks_count[i]);

    return 0;
}
