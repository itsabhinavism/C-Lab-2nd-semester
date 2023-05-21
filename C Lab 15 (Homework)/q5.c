#include <stdio.h> #include<string.h>
void main()
{
    char str[100];
    printf("Enter The String ");
    gets(str);
    int len = strlen(str);
    int count = 1;
    int i;
    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    printf("COUNT OF WORDS %d", count);
}