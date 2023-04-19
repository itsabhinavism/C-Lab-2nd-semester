#include<stdio.h>
//metre to km
int main()
{
    int kilometre, meter, rem;
    printf("Enter the meters\n");
    scanf("%d", &meter);
    
    kilometre = (meter / 1000);
    rem = meter%1000;
    printf("The length in Kilometres is %d Kilometres and %d meters", kilometre, rem);

    return 0;
}