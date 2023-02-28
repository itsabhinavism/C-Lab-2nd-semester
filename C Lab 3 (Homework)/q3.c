#include <stdio.h>

int main()
{
    float n;
    printf("Type the value of earthquake displayed on Ritcher's Scale:\n");
    scanf("%f", &n);
    if(n<5.0)
    {
        printf("Little or no damage");
    }
    else if(n>=5.0&&n<5.5)
    {
        printf("Some Damage");
    }
    else if(n>=5.5&&n<6.5)
    {
        printf("Serious Damage: walls may crack or fall");
    }
    else if(n>=6.5&&n<7.5)
    {
        printf("Disaster:house and building may collapse");
    }
    else 
        printf("Catastrophe:most building destroyed");
    return 0;
}