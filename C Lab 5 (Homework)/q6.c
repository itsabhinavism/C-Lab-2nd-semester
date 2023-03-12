#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (; num > 0; num /= 10)
    {
        int mod = num % 10;
        printf("%d\n", mod);
        sum += mod;
    }
    if (sum % 9 == 0)
    {
        printf("It is divisible by 9");
    }
    else
    {
        printf("It is not divisible by 9");
    }

    return 0;
}