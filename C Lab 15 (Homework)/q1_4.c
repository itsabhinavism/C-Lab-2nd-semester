// D String//
#include <stdio.h> #include<string.h>
void main()
{
    char str1[10], str2[10];
    printf("Enter The String ");
    scanf("%s", str1);
    printf("Enter The String ");
    scanf("%s", str2);
    if ((strcmp(str1, str2) == 0))
        printf("string are same");
    else
        printf("string are not same");
}