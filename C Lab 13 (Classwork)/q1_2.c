#include <Stdio.h>

int main()
{
    int arr1[5] = {12, 15, 21, 23, 19}, arr2[3] = {9, 7, 13}, arr3[8];
    for (int i = 4, j = 0; i >= 0; i--, j++)
    {
        arr3[j] = arr1[i];
    }
    for (int i = 2, j = 5; i >= 0; i--, j++)
    {
        arr3[j] = arr2[i];
    }
    for (int i = 0; i <= 7; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}