#include<stdio.h>

int main(void)
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int temp, i, j;

    temp=0;
    for(i=0, j=9; i<10/2; i++, j--)
    {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
        printf("\nIteration No. %d", i);
        printf("\ntemp=%d \na[j]=%d \na[i]=%d\n", temp, a[j], a[i]);

    }
    printf("\nThe Array in Reverse Order:\n");
    for(i=0; i<10; i++)
        printf("%d\n", a[i]);

    return 0;
}
