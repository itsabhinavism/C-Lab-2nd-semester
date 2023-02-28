#include <stdio.h>

int main()
{
    int pollutant;
    float gramsPerMile, odometerReading, limit;

    printf("(1) Carbon monoxide\n");
    printf("(2) Hydrocarbons\n");
    printf("(3) Nitrogen oxides\n");
    printf("(4) Non-methane hydrocarbons\n");
    printf("Enter pollutant number >> ");
    scanf("%d", &pollutant);

    printf("Enter number of grams emitted per mile >> ");
    scanf("%f", &gramsPerMile);

    printf("Enter odometer reading >> ");
    scanf("%f", &odometerReading);

    if (pollutant == 1) {
        limit = 3.4;
    } else if (pollutant == 2) {
        limit = 0.31;
    } else if (pollutant == 3) {
        limit = 0.4;
    } else if (pollutant == 4) {
        limit = 0.25;
    } else {
        printf("Invalid pollutant number\n");
        return 1;
    }

    float emissions = gramsPerMile * odometerReading;
    if (emissions > limit) {
        printf("Emissions exceed the permitted level of %.2f grams/mile.\n", limit);
    } else {
        printf("Emissions are within the permitted level of %.2f grams/mile.\n", limit);
    }

    return 0;
}