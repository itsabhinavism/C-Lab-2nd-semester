/*Write a menu driven program to check a number is prime or not, perfect or not,
Armstrong or not using user defined function like isprime(), isperfect() and
isarmstrong().*/
#include <stdio.h>
void prime()
{
    int n, c = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (c = 1)
    {
        printf("The number is not prime\n");
    }
    else
    {
        printf("The number is prime\n");
    }
}
void perfect()
{
    int n, c = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            c += i;
        }
    }
    if (c == n)
    {
        printf("The number is perfect number\n");
    }
    else
    {
        printf("The number is not perfect\n");
    }
}
void armstrong()
{
    int n, c, d = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    n = c;
    while (n != 0)
    {
        int a = n % 10;
        d += a * a * a;
        n /= 10;
    }
    if (c == d)
    {
        printf("The number is Armstrong number\n");
    }
    else
    {
        printf("The number is not an armstrong number\n");
    }
}
void main()
{
    int c;
    do
    {
        printf("Enter the choice:");
        scanf("%d", &c);

        switch (c)
        {
        case (1):
            prime();
            break;
        case (2):
            perfect();
            break;
        case (3):
            armstrong();
        }
    } while (c != 4);
}