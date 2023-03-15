//q3)Count the even and odd numbers in a array
#define SIZE 10
#include<stdio.h>
void main(){
    int arr[SIZE],i,even=0,odd=0;
    for(i=0;i<SIZE;i++){
        printf("Enter the value for arr[%d]: ",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even Numbers = %d, Odd Number = %d\n",even, odd);
}