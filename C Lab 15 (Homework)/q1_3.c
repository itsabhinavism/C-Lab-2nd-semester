// C String//
#include <stdio.h> #include<string

void main()
{
    char str1[20], str2[20];
    printf("Enter The String ");
    scanf("%s", str1);
    printf("Enter The String ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("FIRST STRING %s SECOND STRING %s ", str1, str2);
    strcat(str1, "_one");
    printf("FINAL STRING %s ", str1);
}