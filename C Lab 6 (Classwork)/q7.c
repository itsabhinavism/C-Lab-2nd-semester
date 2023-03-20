#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    printf("No of Squares of all Number from 1 to N = %d", sum);
    return 0;
}