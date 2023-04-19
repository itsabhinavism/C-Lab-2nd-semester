//Swap 2 integers using third variable
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping first number: ");
    printf("%d",a);
    printf("\nAfter Swapping second number: ");
    printf("%d",b);
}