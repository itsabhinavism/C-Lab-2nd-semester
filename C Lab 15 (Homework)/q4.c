#include <stdio.h> #include<string.h>
void main()
{
    char str[20];
    printf("Enter The String ");
    scanf("%s", str);
    int len = strlen(str);
    char rev[len];
    int i;
    for (i = 0; i < len; i++)
    {
        rev[i] = str[len - 1 - i];
    }
    rev[i] = '\0';
    printf("REVERSE STRING %s", rev);
}