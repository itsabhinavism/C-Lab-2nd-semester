#include<stdio.h>
int main() {
//find the simple interest//
int x;
printf("Type the principle- ");
scanf("%d", &x);

int y;
printf("Type the rate of interest- ");
scanf("%d", &y);

int z;
printf("Type the time- ");
scanf("%d", &z);

float value;
value = (x*y*z)/(100);
printf("The simple interest is %f", value);
    return 0;
}
