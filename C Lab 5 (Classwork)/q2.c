// q2)Find the sum of digits of a number until the sum is reduced to 1 digit. Example: 538769->38->11->2
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