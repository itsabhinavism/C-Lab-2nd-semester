/*Write a menu driven program to check a number is prime or not, perfect or not,
Armstrong or not using user defined function like isprime(), isperfect() and
isarmstrong().*/
#include <stdio.h>
void prime()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("The number is not prime!\n");
            break;
        }
        else
        {
            printf("The number is prime\n");
            break;
        }
    }
}
void perfect()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
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
        }
    case (2):
        perfect();
        break;
    } while (c != 4);
}