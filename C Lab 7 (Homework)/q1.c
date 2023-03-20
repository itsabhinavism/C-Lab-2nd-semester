#include <stdio.h>
void main()
{
    int arr[100];
    int n, i, p, val;
    printf("ENTER THE NO OF ELEMENTS: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter The Element: ");
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE POSITION OF NEW ELEMENTS:");
    scanf("%d", &p);
    printf("ENTER THE ELEMENTS: ");
    scanf("%d", &val);
    for (i = n - 1; i >= p - 1; i--)
        arr[i + 1] = arr[i];
    arr[p - 1] = val;
    for (i = 0; i < n + 1; i++)
    {
        printf("%d,", arr[i]);
    }
}