#include <stdio.h>
int main()
{
    float curr_year[12] = {3.2, 2.2, 3.6, 4.0, 4.0, 1.6, 2.4, 3.5, 4.2, 5.1, 3.7, 2.8};
    float prev_year[12] = {4.0, 3.0, 3.2, 3.5, 3.8, 2.2, 2.6, 3.8, 4.0, 5.0, 4.0, 3.5};

    // Compute the total rainfall for each year and the average monthly rainfall
    float curr_year_total = 0, prev_year_total = 0;
    float curr_year_avg = 0, prev_year_avg = 0;
    int i;
    for (i = 0; i < 12; i++)
    {
        curr_year_total += curr_year[i];
        prev_year_total += prev_year[i];
    }
    curr_year_avg = curr_year_total / 12;
    prev_year_avg = prev_year_total / 12;

    // Print the table of monthly rainfall and comparison with the previous year     printf("Table of monthly rainfall\n");
    printf("%-10s%10s%10s\n", "", "This year", "Last year");
    char *month_names[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for (i = 0; i < 12; i++)
    {
        printf("%-10s%10.1f%10.1f\n", month_names[i], curr_year[i], prev_year[i]);
    }
    printf("Total rainfall this year: %.1f\n", curr_year_total);
    printf("Total rainfall last year: %.1f\n", prev_year_total);
    printf("Average monthly rainfall for this year: %.1f\n", curr_year_avg);
    printf("Average monthly rainfall for last year: %.1f\n", prev_year_avg);

    return 0;
}