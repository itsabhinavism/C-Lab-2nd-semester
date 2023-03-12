#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    int term = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += term;
        term += i;
    }
    printf("The sum of the series up to %d terms is: %d", n, sum);
    return 0;
}
