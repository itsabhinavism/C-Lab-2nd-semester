// q1)Print the reverse of a positive integer.
#include <stdio.h>
void printReverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", rev);
}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("The reverse of %d is: ", num);
    printReverse(num);
    return 0;
}