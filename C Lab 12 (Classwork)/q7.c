// q7)Find the factorial of a number.
#include <stdio.h>
int fact(int n)
{
    int fact = 1;
    if (n == 0)
        return 1;
    else
        for (int i = n; i > 1; i--)
            fact *= i;
    return fact;
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial Of The Number: %d", fact(num));
    return 0;
}