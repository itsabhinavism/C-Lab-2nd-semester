//q2)Add all the elements of an array
#include<stdio.h>
void main(){
    int sum=0,arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the element in array:\n ");
        scanf("%d",&arr[i]);
    }
    printf("The sum is: ");
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}