#include<stdio.h>

int main(void)
{
    int ara1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];
    int i, j;

    for(i=0, j=9; i<10; i++, j--)
        ara2[j] = ara1[i];

    for(i=0; i<10; i++)
        ara1[i] = ara2[i];

    for(i=0; i<10; i++)
        printf("%d\n", ara1[i]);

    return 0;
}
