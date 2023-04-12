// q3)Print all odd and even numbers separately within a given range. The range is input through the user.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the starting number: ");
    scanf("%d", &a);
    printf("Enter the ending number: ");
    scanf("%d", &b);
    printf("Even numbers: ");
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Odd numbers: ");
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}