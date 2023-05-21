#include <stdio.h>
void main()
{
    int age = 10;
    float sal = 6500.25;
    printf("Value of age=%d, Address of age=%u\n", age, &age);
    printf("Value of sal=%f, Address of sal=%u\n", sal, &sal);
}