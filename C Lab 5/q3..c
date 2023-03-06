//q3)Print sum of digits of any number
#include<stdio.h>
void main(){
    int n,sum=0,rem;
    printf("Enter the number");
    scanf("%d",&n);
    for(;n>0;n/=10){
        rem=n%10;
        sum+=rem;
    }
    printf("Sum of the digits=%d\n",sum);
}