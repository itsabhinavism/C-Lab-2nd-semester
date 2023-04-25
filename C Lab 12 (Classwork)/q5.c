// q5)Generate fibonacci series.
#include <stdio.h>
int fibo(int n)
{
    if (n == 0 || n == 1)
        return 1;
    elsereturn(fibo(n - 1) + fibo(n - 2));
}
void main()
{
    int n;
    printf("Enter The Number 1: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", fibo(i));
    }
    printf("\n");
}