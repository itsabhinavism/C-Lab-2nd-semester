#define ROW 4
#define COL 3
#include <stdio.h>
int main()
{
    int mat1[ROW][COL], mat2[COL][ROW], i, j;
    printf("Enter elements of matrix :\n");
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &mat1[i][j]);
    for (i = 0; i < COL; i++)
        for (j = 0; j < ROW; j++)
            mat2[i][j] = mat1[j][i];
    printf("The transpose of matrix is:\n");
    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            printf("%5d", mat2[i][j]);
        }
        printf("\n");
    }
}