// p2)Find the sum of this series up to n terms 1+2+4+7+11+16+...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    int term = 1;
    int i = 1;

    while (i <= n)
    {
        sum += term;
        term += i;
        i++;
    }

    printf("The sum of the series up to %d terms is: %d", n, sum);

    return 0;
}