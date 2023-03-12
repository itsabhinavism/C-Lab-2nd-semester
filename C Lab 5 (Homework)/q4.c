#include <stdio.h>
void main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Fibonacci Series:");
    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", nextTerm);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    // return ;
    }

}