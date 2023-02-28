//Write a program, find discriminant of a quadratic equation and check the nature of the root
#include<stdio.h>
void main(){
    int d,a,b,c;
    printf("Enter coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter coefficient of x: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    printf("The discriminant is %d\n", d);
    d>=0 ? printf("Real roots") : printf("Virtual Roots");

}