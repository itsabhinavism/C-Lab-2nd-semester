#include <stdio.h>
int *arithmatic()
{
    int a, b;
    printf("Enter the numbers:");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d \n", a, b, a + b);
    printf("%d - %d = %d \n", a, b, a - b);
    printf("%d * %d = %d \n", a, b, a * b);
    printf("%d / %d = %d \n", a, b, a / b);
    return 0;
}
int main()
{
    int a, b;
    int *p;
    p = arithmatic();

    printf("%d", *p);
}