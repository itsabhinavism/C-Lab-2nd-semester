#include <stdio.h>

int main()
{
    int n, sum = 0, rem;

    printf("Enter the number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10; printf("%d\n",rem);
        n /= 10; printf("%d\n",n);
        sum += rem; 
    }

    printf("The sum of the digits are : %d\n", sum);

    return 0;
}