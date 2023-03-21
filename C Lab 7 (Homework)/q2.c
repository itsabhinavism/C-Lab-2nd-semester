#include <stdio.h>
int main()
{
    int arr[100];
    int pos, i, num;
    printf(" \n Enter the number of elements in an array: \n ");
    scanf(" %d", &num);
    printf(" \n Enter %d elements in array: \n ", num);
    for (i = 0; i < num; i++)
    {
        printf("Enter The Element: ");
        scanf("%d", &arr[i]);
    }
    printf("The position of the array element to be delete: \n ");
    scanf(" %d", &pos);
    if (pos >= num + 1)
    {
        printf(" \n Deletion is not possible in the array.");
    }
    else
    {
        for (i = pos - 1; i < num - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf(" \n The resultant array is: \n");
        for (i = 0; i < num - 1; i++)
        {
            printf(" %d, ", arr[i]);
        }
    }
    return 0;
}