#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter numbers to add (enter 0 to finish):\n");

    while (1)
    {
        scanf("%d", &number);
        if (number == 0)
        {
            break;
        }
        sum += number;
    }

    printf("The sum is %d\n", sum);

    return 0;
}