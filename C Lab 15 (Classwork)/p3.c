#include <stdio.h>
void main()
{
    int i, j, n;
    printf("type n - ", n);
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n"); // for next line of pyramid.//
    }
}
