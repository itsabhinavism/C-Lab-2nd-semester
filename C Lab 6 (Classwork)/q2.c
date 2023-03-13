#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a alpahabet : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

        printf("Alphabet is a vowel.\n");
        break;

    default:
        printf("Alphabet is a constant.\n");
    }
    return 0;
}