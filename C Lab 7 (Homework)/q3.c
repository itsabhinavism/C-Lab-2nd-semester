#include <stdio.h>
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int merged[10];
    int i = 0, j = 0, k = 0;

    while (i < 5 && j < 5)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < 5)
    {
        merged[k++] = arr1[i++];
    }
    while (j < 5)
    {
        merged[k++] = arr2[j++];
    }
    printf("Merged array: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }
    return 0;
}