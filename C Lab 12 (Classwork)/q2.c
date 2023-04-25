// q2)Convert a decimal number to binary and vice versa.
#include <stdio.h>
void decToBin(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        decToBin(n / 2);
        printf("%d", n % 2);
    }
}
int binToDec(int n)
{
    int decimal = 0, base = 1;
    while (n > 0)
    {
        decimal += (n % 10) * base;
        n /= 10;
        base *= 2;
    }
    return decimal;
}
int main()
{
    int num, choice;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter your choice:\n");
    printf("1. Convert decimal to binary\n");
    printf("2. Convert binary to decimal\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Binary equivalent of %d is: ", num);
        decToBin(num);
        break;
    case 2:
        printf("Decimal equivalent of %d is: %d\n", num, binToDec(num));
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}
