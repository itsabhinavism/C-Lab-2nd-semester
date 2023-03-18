// q3)Print larger of three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("Largest Number is: %d\n", a);
    }
    else if (b > c && b > a)
    {
        printf("Largest Number is: %d\n", b);
    }
    else
    {
        printf("Largest Number is: %d\n", c);
    }
}
