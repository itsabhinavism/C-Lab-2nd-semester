#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("The point is at the origin\n");
    } else if (x == 0) {
        printf("The point is on the y-axis\n");
    } else if (y == 0) {
        printf("The point is on the x-axis\n");
    } else if (x > 0 && y > 0) {
        printf("The point is in quadrant I\n");
    } else if (x < 0 && y > 0) {
        printf("The point is in quadrant II\n");
    } else if (x < 0 && y < 0) {
        printf("The point is in quadrant III\n");
    } else {
        printf("The point is in quadrant IV\n");
    }

    return 0;
}