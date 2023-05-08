/*WAP in C to input a matrix of size m and n. Take input and display using function
display(). Passing argument as matrix.*/

#include <stdio.h>
void display(int x, int y, int mat[x][y])
{
    printf("The matrix is:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a, b;
    printf("Enter no of rows: ");
    scanf("%d", &a);
    printf("Enter no of columns: ");
    scanf("%d", &b);

    int mat[a][b];
    printf("Enter the values in the matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    display(a, b, mat);

    return 0;
}
