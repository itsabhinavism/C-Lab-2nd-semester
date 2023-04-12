// q2)Input any integer and print your name that many times.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Abhik Samanta\n");
    }
    return 0;
}