#include <stdio.h>

int main()
{
    char op;
    int a, b;
    printf("Enter number operator and another number :\n");
    scanf("%d%c%d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("Result = %d\n", a + b);
        break;

    case '-':
        printf("Result = %d\n", a - b);
        break;

    case '*':
        printf("Result = %d\n", a * b);
        break;

    case '/':
        printf("Result = %d\n", a / b);
        break;

    case '%':
        printf("Result = %d\n", a % b);
        break;

    default:
        printf("Enter valid opertor\n");
    }
    return 0;
}