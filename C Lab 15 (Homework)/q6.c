#include <stdio.h> #include <string.h>
int main()
{
    char str1[10], str2[10];
    char result1[10], result2[10];
    int i, j, k;
    int len1, len2;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    k = 0;
    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                str1[i] = str2[j] = '*';
                break;
            }
        }
    }
    k = 0;
    for (i = 0; i < len1; i++)
    {
        if (str1[i] != '*')
        {
            result1[k++] = str1[i];
        }
    }
    result1[k] = '\0';
    k = 0;
    for (i = 0; i < len2; i++)
    {
        if (str2[i] != '*')
        {
            result2[k++] = str2[i];
        }
    }
    result2[k] = '\0';
    printf("Resultant string 1: %s\n", result1);
    printf("Resultant string 2: %s\n", result2);
    return 0;
}