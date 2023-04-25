#include <stdio.h>
float population(int year)
{
    int t = year - 1990;
    float P = 52.966 + 2.184 * t;
    return P;
}
int main()
{
    int year;
    printf("Enter a year after 1990> ");
    scanf("%d", &year);
    float predicted_population = population(year);
    printf("Predicted Gotham City population for %d (in thousands): %.3f", year, predicted_population);
    return 0;
}