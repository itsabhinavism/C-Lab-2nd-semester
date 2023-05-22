/*Q2.Write a menu driven program to check a number is prime or not,
perfect or not, Armstrong or not using user defined function like isprime(),
isperfect() and isarmstrong().
Example:
1-Prime no checking, 2-Perfect no checking, 3-Armstrong no checking and 4-Exit.
The program should run till the user does not press option-4.*/
#include <stdio.h>
void isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("\nNOT A PRIME");
            return;
        }
    }
    printf("\nITS A PRIME NUMBER");
}
void isperfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
        printf("\nITS A PERFECT NUMBER");
    else
        printf("\nITS NOT A PERFECT NUMBER");
}
void isarmstrong(int n)
{
    int sum = 0, n1 = n;
    while (n1 != 0)
    {
        int r = n1 % 10;
        n1 = n1 / 10;
        sum += r * r * r;
    }
    if (sum == n)
        printf("\nITS A ARMSTRONG NUMBER");
    else
        printf("\nITS NOT A ARMSTRONG NUMBER");
}
void main()
{
    int n, ch, c;
    printf("ENTER THE NUMBER ");
    scanf("%d", &n);
    printf("ENTER THE CHOICE \n 1: Prime Number \n 2: Perfect Number \n 3: Armstrong Number \n 4: Exit");
    do
    {
        printf("\nENTER THE VALUE: ");
        scanf("%d", &ch);
        if (ch > 0 && ch < 5)
            c = 0;
    } while (c != 0);
    switch (ch)
    {
    case 1:
        isprime(n);
        break;
    case 2:
        isperfect(n);
        break;
    case 3:
        isarmstrong(n);
        break;
    }
}