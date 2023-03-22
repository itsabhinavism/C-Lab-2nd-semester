#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Print the numbers - \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }

    else
    {
        if (b > a)
        {
            max = b;
        }
        else
        {
            (max = c);
        }
    }
    printf("largest number is - %d", max);
    return 0;
}