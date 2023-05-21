#include <stdio.h>
void main()
{
    int a = 5;
    int *pa;
    int **ppa;
    pa = &a;
    ppa = &pa;
    printf("Address of a=%u\n", &a);
    printf("Value of pa= Address of a= %u\n", pa);
    printf("Value of *pa= Value of a= %d\n", *pa);
    printf("Address of pa=%u\n", &pa);
    printf("Value of ppa= Address of pa= %u\n", ppa);
    printf("Value of *ppa= Value of pa= %u\n", *ppa);
    printf("Value of **ppa= Value of a= %d\n", **ppa);
    printf("Address of ppa= %u\n", &ppa);
}