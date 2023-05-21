#include <stdio.h> #include<string.h>
void main()
{
    char str[20];
    printf("Enter The String ");
    scanf("%s", str);
    int len = strlen(str);
    int cout = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
            cout = 1;
    }
    if (cout == 0)
        printf("PALINDROME STRING");
    else
        printf("NOT PALINDROME STRING");
}