#include<stdio.h>

int main(void)
{
    char ch = 'D';

    if (ch>='a' && ch<='z')
        printf("%c is lower case\n", ch);

    else if (ch>='A' && ch<'z')
        printf("%c is upper case\n", ch);

    else
        printf("%c is not a letter", ch);

    return 0;
}
