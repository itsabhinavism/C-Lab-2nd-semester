#include <stdio.h>
int main()
{
    int dec, bin = 0, base = 1, rem;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    for (int i = dec; i > 0; i /= 2)
    {
        rem = i % 2;
        bin += rem * base;
        base *= 10;
    }
    printf("Binary equivalent: %d\n", bin);
    return 0;
}