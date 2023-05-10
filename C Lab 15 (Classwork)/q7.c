// Pattern 7
#include <stdio.h>
void main()
{
    int n;
    printf("Enter  n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n + 1 - j);
        }
        printf("\n");
    }
}