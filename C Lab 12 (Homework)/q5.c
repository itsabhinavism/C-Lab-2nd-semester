#include <stdio.h>
#include <math.h>
float calculate_speed_of_sound(float temperature)
{
    float a = 1086 * sqrt((5 * temperature + 297) / 247.0);
    return a;
}
int main()
{
    float temperature;
    printf("This program calculates the speed of sound in air based on temperature T (in Fahrenheit)\n");
    printf("Enter a temperature value T to calculate the speed of sound: ");
    scanf("%f", &temperature);
    float speed_of_sound = calculate_speed_of_sound(temperature);
    printf("The speed of sound in air at %.2f degrees Fahrenheit is %.2f ft./sec.\n", temperature, speed_of_sound);
    return 0;
}