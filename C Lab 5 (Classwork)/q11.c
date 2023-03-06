// q2.
#include <stdio.h>
int main()
{
    int year, n, leap;
    printf("Enter Year:");
    scanf("%d", &year);

    printf("Enter the value of n:");
    scanf("%d", &n);

    int a = year % n;
    leap = year + a;
    printf("%d", leap);
    printf(" ");

    for (int i = 1; i <= n - 1; i++)
    {
        leap += 4;
        printf("%d", leap);
        printf(" ");
    }
}