// q8)Print the numbers between10 to 1000 where the digits of the numbers are same.
#include <stdio.h>
int main()
{
    int num;
    printf("Numbers between 10 to 1000 where the digits of the numbers are the same:\n");
    for (num = 10; num <= 1000; num++)
    {
        if ((num <= 100 && num % 11 == 0) || (num >= 100 && num % 111 == 0))
        {
            printf("%d\t", num);
        }
    }
    return 0;
}