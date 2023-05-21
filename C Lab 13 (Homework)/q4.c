#include <stdio.h>
void main()
{
    int a = 5, *pi = &a;
    char b = 'x', *pc = &b;
    float c = 5.5, *pf = &c;
    printf("Value of pi = Address of a = %u\n", pi);
    printf("Value of pc = Address of b = %u\n", pc);
    printf("Value of pf = Address of c = %u\n", pf);
    pi++;
    pc++;
    pf++;
    printf("Now value of pi = %u\n", pi);
    printf("Now value of pc = %u\n", pc);
    printf("Now value of pf = %u\n", pf);
}