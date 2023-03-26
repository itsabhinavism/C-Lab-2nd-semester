#include <stdio.h>

int main()
{
    // Define the data for the candidates and precincts
    int votes[5][4] = {{350, 200, 180, 205}, {260, 225, 185, 200}, {300, 180, 215, 205}, {225, 225, 220, 108}, {175, 250, 195, 230}};
    char candidates[5] = {'A', 'B', 'C', 'D', 'E'};
    char precincts[4][10] = {"Precinct 1", "Precinct 2", "Precinct 3", "Precinct 4"};
    int total_votes[5] = {0};
    float percent_votes[5] = {0};

    // Display the table of votes
    printf("Table of Votes\n");
    printf("Candidate precincts[0] precincts[1] precincts[2] precincts[3]\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%5c      ", candidates[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("%10d ", votes[i][j]);
            total_votes[i] += votes[i][j];
        }
        percent_votes[i] = ((float)total_votes[i] / 980) * 100;
        printf("%10d\n", total_votes[i]);
    }
    printf("\n");

    // Compute and display the total votes and percentage of votes for each candidate
    printf("Total Votes and Percentage of Votes\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%5c      %10d   %.2f%%\n", candidates[i], total_votes[i], percent_votes[i]);
    }
    printf("\n");

    // Check if any candidate received over 50% of the votes
    int winner = -1;
    for (int i = 0; i < 5; i++)
    {
        if (percent_votes[i] > 50.0)
        {
            winner = i;
            printf("Winner: Candidate %c\n", candidates[winner]);
            break;
        }
    }

    // If no candidate received over 50% of the votes, identify the two candidates with the highest votes and declare a runoff
    if (winner == -1)
    {
        int max1 = -1, max2 = -1;
        for (int i = 0; i < 5; i++)
        {
            if (total_votes[i] > max1)
            {
                max2 = max1;
                max1 = total_votes[i];
            }
            else if (total_votes[i] > max2)
            {
                max2 = total_votes[i];
            }
        }
        printf("Runoff between Candidates %c and %c\n", candidates[max1], candidates[max2]);
    }

    return 0;
}