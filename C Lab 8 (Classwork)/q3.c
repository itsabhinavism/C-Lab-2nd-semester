#define ROW 4
#define COL 3 
#include<stdio.h>
int main()
{
    int i, j;
    int mat1[4][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}, {20, 21, 22}};
    int mat2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 9, 1}};
    int mat3[4][3];

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The resultant matrix mat3 is: \n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}