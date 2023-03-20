// p3)Find out the value of x raised to the power y, where x and y are positive integers.
#include <stdio.h>
int main()
{
    int x, y, sum = 1;
    printf("Enter the x: ");
    scanf("%d", &x);
    printf("Enter the y: ");
    scanf("%d", &y);
    for (int i = 1; i <= x; i++)
    {
        sum *= y;
    }
    printf("Result= %d", sum);
    return 0;
}