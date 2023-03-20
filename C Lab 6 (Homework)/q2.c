#include <stdio.h>
int main()
{
    int n, sum = 0, mul = 1, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        if (rem % 2 == 0)
            sum += rem;
        else
            mul *= rem;
        n /= 10;
    }
    printf("Sum of Even Digits = %d \n Multiplication of Odd Digits =%d", sum, mul);
    return 0;
}