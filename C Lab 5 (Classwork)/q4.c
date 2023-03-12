#include <stdio.h>
void main()
{
    int n, num;
    long fact = 1;
    printf("Enter the number :");
    scanf("%d", &n);
    num = n;
    if (n < 0)
    {
        printf("No factorial of negative number.");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d = %ld\n", num, fact);
    }
}