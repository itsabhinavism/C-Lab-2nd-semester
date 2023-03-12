#include <stdio.h>
int main()
{
    int x, y;
    int product = 0;
    printf("Enter two integers:\n");
    scanf("%d%d", &x, &y);
    for (int i = 1; i <= y; i++)
    {
        product += x;
    }
    printf("Product = %d\n", product);
}