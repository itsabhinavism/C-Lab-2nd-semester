#include <stdio.h>
void sum(int a, int b)
{
    int s = a + b;
    printf("The Sum is %d", s);
}
int main()
{
    int a, b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    sum(a, b);
    return 0;
}