// p5)Find the LCM and HCF of two numbers.
#include <stdio.h>
void main()
{
    int num1, num2, a, b, temp, hcf, lcm;
    printf("Enter two Numbers: ");
    scanf("%d %d", &num1, &num2);
    a = num1;
    b = num2;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    lcm = (num1 * num2) / hcf;
    printf("\nHCF(%d,%d) = %d and LCM(%d,%d) = %d", num1, num2, hcf, num1, num2, lcm);
}