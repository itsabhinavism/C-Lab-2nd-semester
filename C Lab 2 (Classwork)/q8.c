//Check the number is even or odd using terniary operator
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter The Number \n");
    scanf("%d",&a);
    
    (a % 2 == 0) ? printf("Number Is Even \n"): printf("Number Is Odd \n");

}