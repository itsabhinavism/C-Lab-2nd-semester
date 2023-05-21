// A String length//
#include <stdio.h> #include<string.h>
void main()
{
    char str[20];
    printf("Enter The String ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Length of the string %d", len);
}