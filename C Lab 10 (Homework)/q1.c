// q1)Check whether an input integer is a perfect square or not.
#include <stdio.h>
int main()
{
    int i, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 0; i <= number; i++)
    {
        if (number == i * i)
        {
            printf("%d is a perfect square\n", number);
            break;
        }
        else
        {
            printf("%d is not a perfect square\n", number);
            break;
        }
    }
    return 0;
}