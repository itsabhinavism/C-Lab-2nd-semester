// q1)Input values into an array and display them
#include <stdio.h>
void main()
{
    int arr[5];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the element in array: ");
        scanf("%d", &arr[i]);
    }
    printf("The elements are:  ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", arr[i]);
    }
}