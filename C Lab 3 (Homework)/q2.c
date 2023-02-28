#include <stdio.h>

int main()
{
    char c;
    printf("Enter the colour code:\n");
    scanf("%c", &c);
    if (c == 'O' || c == 'o')
    {
        printf("Ammonia");
    }
    else if (c == 'B' || c == 'b')
    {
        printf("Carbon Monoxide");
    }
    else if (c == 'Y' || c == 'y')
    {
        printf("Hydrogen");
    }
    else if (c == 'G' || c == 'g')
    {
        printf("Oxygen");
    }
    else
    {
        printf("Contents Unknown");
    }
}