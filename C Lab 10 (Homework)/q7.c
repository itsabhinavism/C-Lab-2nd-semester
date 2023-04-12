// q7)Find the numbers between 1 to 1000, which are divisible by the sum of its digits.
#include <stdio.h>
int main()
{
    int num, sum, i;
    printf("Numbers between 1 to 1000 which are divisible by the sum of its digits:\n");
    for (num = 1; num <= 1000; num++)
    {
        sum = 0;
        i = num;
        while (i > 0)
        {
            sum += i % 10;
            i /= 10;
        }
        if (num % sum == 0)
        {
            printf("%d\t", num);
        }
    }
    return 0;
}