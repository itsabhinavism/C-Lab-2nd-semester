// q4)Find out the LCM and HCF of two numbers.
#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    int hcf = gcd(a, b);
    return (a * b) / hcf;
}
int main()
{
    int num1, num2, hcf, lcm_value;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    hcf = gcd(num1, num2);
    lcm_value = lcm(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm_value);
    return 0;
}