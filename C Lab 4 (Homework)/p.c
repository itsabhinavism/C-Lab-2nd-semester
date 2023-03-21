#include <stdio.h>

int main()
{
    int n, i = 1, fact = 1;

    printf("Type - ");
    scanf("%d", &n);

    while (n != 0)
    {
        fact *= n;
        n++;
    }
    printf("%d", fact);
    return 0;
}