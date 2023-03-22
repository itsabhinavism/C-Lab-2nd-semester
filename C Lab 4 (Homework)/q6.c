// p6)Develop a program to display each digit, starting with the rightmost digit. Your program should also determine whether or not the number is divisible by 9.
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int mod = num % 10;  
        printf("%d\n", mod);
        sum += mod; //printf ("%d\t",sum);
        num = num / 10;  //printf ("%d\t",num);
    }

    if (sum % 9 == 0)
        printf("It is divisible by 9");
    else
    {
        printf("It is not divisible by 9");
    }

    return 0;
}