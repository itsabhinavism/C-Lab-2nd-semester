//q4)Print products of digits of any number
#include<stdio.h>
void main(){
    int n,prod=1,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(;n>0;n/=10){
        rem=n%10;
        prod*=rem;

    }
    printf("Product of the digits: %d\n",prod); 
}