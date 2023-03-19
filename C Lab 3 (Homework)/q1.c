#include <stdio.h>

int main(){
float h,w,bmi;
printf("Type the height in inches - ");
scanf("%f",&h);

printf("Type the weight in lb - ");
scanf("%f",&w);

bmi = (703 * w) / (h*h);

if (bmi<=18.5) {
    printf("Underweight.\n");
}

else if(bmi >= 18.5 && bmi <= 24.9) {
    printf("Normal.\n");
}
    
    else if(bmi>= 25.0 && bmi<=29.9) {
        printf("Overweight.\n");
    }

    else {
        printf("Obese.\n");
    }

    printf("BMI = %f",bmi);
    return 0;
}