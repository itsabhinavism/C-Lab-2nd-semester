// q6)Find out the prime factors of a number entered through keyboard
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    for (int i = 2; i <= num; i++)
    {
        int count = 0;
        while (num % i == 0)
        {
            count++;
            num /= i;
        }
        if (count > 0)
        {
            printf("%d(%d) ", i, count);
        }
    }
    return 0;
}