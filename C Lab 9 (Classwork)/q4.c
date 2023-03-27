// q4)Given three arrays sorted in non-decreasing order, print all common elements in these arrays.
#include <stdio.h>
int main()
{
    int arr1[4] = {3, 5, 7, 9};
    int arr2[4] = {1, 7, 8, 11};
    int arr3[4] = {2, 5, 7, 10};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                if (arr1[i] == arr2[j] && arr2[j] == arr3[k] && arr3[k] == arr1[i])
                {
                    printf("%d\n", arr1[i]);
                }
            }
        }
    }
}