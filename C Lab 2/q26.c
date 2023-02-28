//Display the digits present in 3 digit number and find the sum of all digit
#include<stdio.h>
void main()
{
    int num,a,b,c,sum;
    printf("Enter The Number \n");
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    printf("Digits of the Number %d %d %d \n",c,b,a);
    sum=a+b+c;
    printf("Sum of the Digits %d \n",sum);

}