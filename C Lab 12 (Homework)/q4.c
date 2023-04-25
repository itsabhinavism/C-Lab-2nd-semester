#include <stdio.h>
float celsius_at_depth(float depth)
{
    float celsius = 10 * depth + 20;
    return celsius;
}
float fahrenheit(float celsius)
{
    float fahrenheit = 1.8 * celsius + 32;
    return fahrenheit;
}
int main()
{
    float depth, celsius, fahr;
    printf("Enter the depth inside the earth (in kilometers): ");
    scanf("%f", &depth);
    celsius = celsius_at_depth(depth);
    fahr = fahrenheit(celsius);
    printf("At a depth of %.2f kilometers inside the earth,\n", depth);
    printf("the temperature is %.2f degrees Celsius\n", celsius);
    printf("and %.2f degrees Fahrenheit.\n", fahr);
    return 0;
}