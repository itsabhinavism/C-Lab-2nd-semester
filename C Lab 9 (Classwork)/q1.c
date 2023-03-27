// q1)Perform the union and intersection of two integer arrays.
#include <stdio.h>

int main()
{
    int arr1[5] = {2, 4, 6, 8, 10};
    int arr2[4] = {3, 6, 9, 12};
    // Union
    int union_arr[10];
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        int found = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            union_arr[a++] = arr2[i];
        }
    }
    // Intersection
    int intersect_arr[10];
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] == arr2[j])
            {
                intersect_arr[b++] = arr1[i];
                break;
            }
        }
    }

    printf("Union: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", union_arr[i]);
    }
    printf("\nIntersection: ");
    for (int i = 0; i < b; i++)
    {
        printf("%d ", intersect_arr[i]);
    }

    return 0;
}
