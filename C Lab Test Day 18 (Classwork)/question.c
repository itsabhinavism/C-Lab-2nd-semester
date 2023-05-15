#include<stdio.h>
int main() {
    int i,j,sum,num,count;
    int arr[4] ; 
    for(i=0;i<4;i++){
        printf("Enter any number more than 4 digits : ");
        scanf("%d",&arr[i]);
        while(num!=0){
            num=num/10;
            count++;
        }
        if (count<4) { 
            printf("Invalid Input !!");
        }
        else{
            printf("%d",arr[i]);
        }
    }
}