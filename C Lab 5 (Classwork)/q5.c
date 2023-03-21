// q5)Convert a binary number to a decimal number
#include <stdio.h>
void main()
{
    int n, nsave, rem, d;
    int j = 1;
    int dec = 0;
    printf("Enter the number in binary: ");
    scanf("%d", &n);
    nsave = n;
    for (; n > 0; n /= 10)
    {
        rem = n % 10;
        d = rem * j;
        dec += d;
        j *= 2;
    }
    printf("Binary number = %d, Decimal number = %d\n", nsave, dec);
}