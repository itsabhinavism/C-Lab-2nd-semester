#define SIZE 10 
#include<stdio.h>
int main()
{
    int arr[SIZE];
    int i, j, temp;
    printf("Enter elements of the array: \n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The Sorted Array is:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\ t", arr[i]);
    }
    printf("\n");
}