//q2)Program to print the larger and smaller of two numbers
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if(a>b){
        printf("The larger number is %d and smaller number is %d\n",a,b);
    }
    else{
        printf("The larger number is %d and smaller number is %d\n",b,a);
    }
}