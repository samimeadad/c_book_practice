#include<stdio.h>

int main(void)
{
    char ch;

    printf("Enter the letter: ");
    scanf("%c", &ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("YES!! %c is a Vowel!\n", ch);

    else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("YES!! %c is a Vowel!\n", ch);

    else
        printf("%c is a consonent!\n", ch);

    return 0;
}
