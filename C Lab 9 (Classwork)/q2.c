// q2)Given an array of positive integers of size n, find the minimum repeating number and its frequency in this array.
#include <stdio.h>
void main()
{
    int arr[100];
    int min, n, i, feq = 0, ele;
    printf("ENTER THE NUMBER OF THE ELEMENTS: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("ENTER THE ELEMENT: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int temp = 0;
        ele = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[i] != -1)
            {
                ++temp;
                arr[j] = -1;
            }
        }
        if (feq < temp)
        {
            min = ele;
            feq = temp;
        }
    }
    printf("ELEMENT %d FREQUENCY %d", min, feq);
}
