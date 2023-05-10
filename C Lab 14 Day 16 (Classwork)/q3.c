/*WAP in C to perform all the arithmetic operation like +,-,*,/ in one function display the
out put in main(). Design a function arith(), which is taking 3 argument and return the
output.*/
#include <stdio.h>
void arith(char c, int a, int b)
{
    switch (c)
    {
    case '+':
        printf("The result is: %d", a + b);
        break;
    case '-':
        printf("The result is: %d", a - b);
        break;
    case '*':
        printf("The result is: %d", a * b);
        break;
    case '/':
        printf("The result is: %d", a / b);
        break;
    default:
        printf("Invalid choice");
        break;
    }
}
void main()
{
    int a, b;
    char c;
    printf("Enter the function:\n");
    scanf("%c", &c);
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);

    arith(c, a, b);
}