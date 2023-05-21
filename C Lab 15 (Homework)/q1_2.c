// B String copy//
#include <stdio.h> #include<string.h>
void main()
{
    char str1[10], str2[10];
    printf("Enter The String ");
    scanf("%s", str1);
    printf("Enter The String ");
    scanf("%s", str2);
    strcpy(str1, str2);
    printf("FRIST STRING %s \t \t SECOND STRING: %s ", str1, str2);
    strcpy(str1, "DELHI");
    strcpy(str2, "CALCUTTA");
}