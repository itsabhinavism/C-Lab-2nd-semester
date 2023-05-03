#include <stdio.h>
void main()
{
    int i, j, n,p;
    printf("type n - ", n);
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%3d",p++ );
        printf("\n"); // for next line of pyramid.//
    }
}
