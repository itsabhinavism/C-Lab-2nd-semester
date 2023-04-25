#include <stdio.h>
float compute_acceleration(float t, float vi, float vf)
{
    float a = (vf - vi) / (t * 60.0);
    return a;
}
int main()
{
    float t = 1.0; // time interval of 1 minute

    float vi = 10.0; // initial velocity of 10 mi/hr

    float vf = 2.5; // final velocity of 2.5 mi/hr
    float a = compute_acceleration(t, vi, vf);
    float time_to_stop = vi / a;
    printf("The cyclist's constant rate of acceleration is %.2f mi/hr^2\n", a);
    printf("It will take %.2f seconds to come to rest.\n", time_to_stop * 3600.0);
    return 0;
}