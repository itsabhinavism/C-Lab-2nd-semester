// A String compare//
#include <stdio.h>
int strcamp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
        i++;
    if (str1[i] == str2[i])
        return 0;
    else
        return (str1[i] - str2[i]);
}
void main()
{
    char str1[10], str2[10];
    printf("Enter The String ");
    scanf("%s", str1);
    printf("Enter The String ");
    scanf("%s", str2);
    int re = strcamp(str1, str2);
    if (re == 0)
        printf("string are same");
    else
        printf("string are not same");
}