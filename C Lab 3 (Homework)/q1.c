#include<stdio.h>
int main(){
    float height,weight,bmi;
    printf("Enter the weight in lb: ");
    scanf("%f",&weight);
    printf("Enter the height in inches: ");
    scanf("%f",&height);
    bmi=(703*weight)/(height*height);
    if(bmi>=30){
        printf("Obese");
    }
    else if(bmi>=25){
        printf("Overweight");
    }
    else if(bmi>=18.5){
        printf("Normal");
    }
    else{
        printf("Underweight");
    }
}