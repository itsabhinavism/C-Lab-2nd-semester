// q3)Find out the prime factors of a number.
#include <stdio.h>
void primeFactors(int n)
{
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    primeFactors(num);
    return 0;
}