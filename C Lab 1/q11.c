//Convert Celsius to Farheneit
#include<stdio.h>
void main(){
    float c,result;
    printf("Enter temperature in celsius: ");
    scanf("%f",&c);
    result=((c*9)/5)+32;
    printf("The temperature in farheneit is : ");
    printf("%f",result);
}