#include <stdio.h>
int main()
{
    char str[] = "India";
    char *p;
    p = str;
    while (*p != '\0')
    {
        printf("Character = %c\t", *p);
        printf("Address = %u\n", p);
        p++;
    }
}