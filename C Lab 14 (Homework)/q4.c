/*Q4.WAP in C to perform all the arithmetic operation like +,-,*,/
in one function display the out put in main().
Design a function arith(),
which is taking two integer value and print the output in main().
In one call all the output should print in main.(Function returning pointer). */
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
    int *p;
    p = arithmatic();
    printf("%d", *p);
}