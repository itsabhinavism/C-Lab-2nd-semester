// q6)Find the power of a positive integer.
#include <stdio.h>
int power(int a, int r, int p)
{
    if (r > 0)
    {
        p *= a;
        power(a, r - 1, p);
    }
    else
        return p;
}
void main()
{
    int a, b;
    printf("Enter The Number: ");
    scanf("%d", &a);
    printf("Enter The Power: ");
    scanf("%d", &b);
    int p = power(a, b, 1);
    printf("Resultant: %d", p);
}