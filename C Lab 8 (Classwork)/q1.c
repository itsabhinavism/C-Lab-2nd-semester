#include <stdio.h>
int main()
{
    int i, arr[100], search, first, last, middle;
    for (i = 0; i < 10; i++)
    {
        printf("Enter %d No element (in ascending order):", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to be searched");
    scanf("%d", &search);
    first = 0;
    last = 9;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (arr[middle] < search)
            first = middle + 1;
        else if (arr[middle] == search)
        {
            printf("\nThe number,%d found at Position %d", search, middle + 1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        printf("\nThe number, %d found at Position %d", search, middle + 1);
    return 0;
}