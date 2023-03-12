#include <stdio.h>
int main()
{
    int num, digit, sum, a;
    printf("Armstrong numbers in the range 100 to 999 are:\n");
    for (num = 100; num <= 999; num++)
    {
        a = num;
        sum = 0;
        while (a > 0)
        {
            digit = a % 10;
            sum += (digit * digit * digit);
            a /= 10;
        }
        if (num == sum)
        {
            printf("%d ", num);
        }
    }
    return 0;
}