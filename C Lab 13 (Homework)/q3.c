#include <stdio.h>
void main()
{
    int *ptr;
    char b = 'c';
    char *ptr2 = &b;
    int val = 10;
    ptr = &val;
    printf("The size of the pointer variable(int) is %u bytes.\n", sizeof(ptr));
    printf("The size of the pointer variable(char) is %u bytes.\n", sizeof(ptr2));
    printf("The size of the value dereferenced by the pointer(int) is %u bytes.\n", sizeof(*ptr));
    printf("The size of the value dereferenced by the pointer(char) is %u bytes.\n", sizeof(*ptr2));
}