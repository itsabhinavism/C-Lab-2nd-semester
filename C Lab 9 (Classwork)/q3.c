// q3)
#include <stdio.h>
int main()
{
    int arr1[4] = {1, 4, 5, 7};
    int arr2[4] = {10, 20, 30, 40};
    int x;
    printf("Enter the sum: \n");
    scanf("%d", &x);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] + arr2[j] == x)
            {
                printf("%d and %d", arr1[i], arr2[j]);
                break;
            }
        }
    }
}