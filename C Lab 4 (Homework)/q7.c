// p7)Write a program to process a collection of daily high temperatures. Your program should count and print the number of hot days, the number of pleasant days, and the number of cold days.
#include <stdio.h>
void main()
{
    float temp;
    int a = 0, b = 0, c = 0;

    while (temp != 0)
    {
        printf("Enter the temperature: / Press 0 to exit \n");
        scanf("%f", &temp);
        if (temp > 85)
        {
            a++;
        }
        else if (temp > 60)
        {
            b++;
        }

        else
        {
            c++;
        }
    }
    printf("The number of hot, pleasant & cool days are: %d,%d,%d\n", a, b, c);
}
