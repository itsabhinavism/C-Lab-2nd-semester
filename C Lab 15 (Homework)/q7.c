#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], a;
    int b = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the character to be searched: ");
    scanf(" %c", &a);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == a)
        {
            b++;
        }
    }
    printf("The character '%c' is found %d times.\n", a, b);
    return 0;
}