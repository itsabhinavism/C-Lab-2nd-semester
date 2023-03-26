#include <stdio.h>

int main()
{
    int i, j;
    int black_women[6][2] = {{68, 74}, {70, 76}, {72, 78}, {74, 80}, {76, 82}, {78, 84}};
    int black_men[6][2] = {{63, 68}, {65, 70}, {67, 72}, {69, 74}, {71, 76}, {73, 78}};
    int white_women[6][2] = {{73, 79}, {75, 81}, {77, 83}, {79, 85}, {81, 87}, {83, 89}};
    int white_men[6][2] = {{67, 73}, {69, 75}, {71, 77}, {73, 79}, {75, 81}, {77, 83}};
    int diff[6][2];

    printf("Life expectancy matrix for black women and men:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\t%d\n", black_women[i][0], black_men[i][0]);
    }

    printf("\nLife expectancy matrix for white women and men:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\t%d\n", white_women[i][0], white_men[i][0]);
    }

    printf("\nDifference matrix:\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            diff[i][j] = black_women[i][j] - black_men[i][j];
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
