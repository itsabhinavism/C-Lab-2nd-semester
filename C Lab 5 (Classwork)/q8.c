//q8)Count the digits in number using do while loop
#include<stdio.h>
void main(){
    int n,count=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(;n>0;n/=10){
        count++;
    }
    printf("Number of digits = %d\n", count);
}