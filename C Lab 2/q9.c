//R1 & R2 IN Parallel where as R3 in series find the resultant resistance
#include<stdio.h>
void main()
{
    float R1,R2,R3;
    float R;
    printf("Enter The Value of R1 which in parallel \n");
    scanf("%f",&R1);
    printf("Enter The Value of R2 which in parallel \n");
    scanf("%f",&R2);
    printf("Enter The Value of R3 which in series \n");
    scanf("%f",&R3);
    R=(1/R1)+(1/R2);
    R=(1/R)+R3;
    printf("Resultant Resistance %f",R);
}