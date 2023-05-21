/*Q3.WAP in C to perform all the arithmetic operation like +,-,*,/ in one function
display the out put in main(). Design a function arith(), which is taking 3 argument and return the output.
Example: int arith(char, int,int). char argument is for operator and
rest two is for operand to perform the arithmetic operation. */
#include <stdio.h>
int arith(char ch, int a, int b)
{
    int re;
    if (ch == '+')
    {
        re = a + b;
    }
    else if (ch == '-')
    {
        re = a - b;
    }
    else if (ch == '*')
    {
        re = a * b;
    }
    else if (ch == '/')
    {
        re = a + b;
    }
    return re;
}
void main()
{
    int a, b, r;
    char ch;
    printf("ENTER THE CHAR: ");
    scanf("%c", &ch);
    printf("ENTER THE NUMBERS: ");
    scanf("%d", &a);
    scanf("%d", &b);

    r = arith(ch, a, b);
    printf("RESULT OF OPERATION: %d", r);
}