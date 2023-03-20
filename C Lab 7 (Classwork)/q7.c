// q7)Convert a decimal number to binary number using array
#include <stdio.h>
voidmain()
{
    int arr[100];
    int n, i = 0, temp;
    printf("Enter the number in decimal: ");
    scanf("%d", &n);
    while (n != 0)
    {
        arr[i] = n % 2;
        n /= 2;
        i++;
    }
    i--;
    printf("The binary equivalent is: ");
    for (; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}