// D String length//
#include <stdio.h>
int astrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
void main()
{
    char str[20];
    printf("Enter The String ");
    scanf("%s", str);
    int len = astrlen(str);
    printf("Length of the string %d", len);
}