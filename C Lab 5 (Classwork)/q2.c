#include <stdio.h>
int main()
{
    int num, sum, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = num;
    while (sum >= 10)
    {
        sum = 0;
        for (int i = num; i > 0; i /= 10)
        {
            digit = i % 10;
            sum += digit;
        }
        num = sum;
    }
    printf("The final sum of digits is: %d\n", sum);
    return 0;
}