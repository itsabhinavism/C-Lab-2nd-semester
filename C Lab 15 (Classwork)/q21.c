// Pattern 21
#include <stdio.h>
void main()
{
    int n;
    printf("Enter  n: ");
    scanf("%d", &n);
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("*");
        }
        for (int j = 1; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}