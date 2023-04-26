/*q2)Write a program to input an odd square matrix and perform the following operations-
    i)Press 1 for finding the sum of the diagonal elements
    ii)Press 2 to find out/display above the leading diagonal
    iii)Press 3 to display the matrix in row wise sorted manner*/
#include <stdio.h>
void main()
{
    int a[100][100];
    int n, ch, sum = 0;
    printf("Enter the size of square matrix :");
    scanf("%d", &n);
    printf("Enter the elements square matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
    printf("\nEnter the Choice Of Arrgument");
    scanf("%d", ch);
    ;
    switch (ch)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    sum += a[i][j];
                }
            }
        }
        break;
    case 2:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    printf("%d", a[i][j]);
                }
            }
        }
        printf("\n");

        break;
    case 3:

        break;
    default:
        printf("Wrong Arrgument");
        break;
    }
}