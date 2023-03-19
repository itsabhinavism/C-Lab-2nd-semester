#include <stdio.h>

int main()
{
    int n, num;
    long f = 1;

    printf("Enter the number -  ");
    scanf("%d", &n);

    num = n;
    if (n < 0)
    {
        printf("No factorial of negative number.");
    }
    else
    {
        while (n > 0)
        {
            f *= n;
            n--;
        }
        printf("Factotrial of %d = %ld\n",num,f);
    }

    return 0;
}