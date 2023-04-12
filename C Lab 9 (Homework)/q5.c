// q5)Add, subtract, and multiply the elements of two arrays.
#include <stdio.h>
int main()
{
    int arr3[5], arr4[5], arr5[5];
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    for (int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
        arr4[i] = arr1[i] - arr2[i];
        arr5[i] = arr1[i] * arr2[i];
    }
    printf("The Addition of two arrays is: \n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", arr3[j]);
    }
    printf("\nThe Subtraction of two arrays is: \n");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", arr4[k]);
    }
    printf("\nThe Product of two arrays is: \n");
    for (int l = 0; l < 5; l++)
    {
        printf("%d ", arr3[l]);
    }
}