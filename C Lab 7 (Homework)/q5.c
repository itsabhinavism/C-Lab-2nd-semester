#include <stdio.h>

int main()
{
    int arr1[100];
    int arr2[100];
    int n, m, i;
    printf(" \n Enter the number of elements in an array 1: \n ");

    scanf(" %d", &n);

    for (i = 0; i < n; i++)

    {
        printf("Enter The Element: ");
        scanf("%d", &arr1[i]);
    }
    printf(" \n Enter the number of elements in an array 2: \n ");

    scanf(" %d", &m);

    for (i = 0; i < m; i++)

    {
        printf("Enter The Element: ");
        scanf("%d", &arr2[i]);
    }

    int union_arr[100];

    int a = 0;
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < m; j++)
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
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
        printf("%d ", intersect_arr[i]);}

        return 0;
    }