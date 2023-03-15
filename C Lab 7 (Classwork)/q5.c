//q5)Find the largest and smallest element in an array
#include<stdio.h>
void main(){
    int i,j,arr[5]={2,9,7,4,1};
    int large,small;
    large=small=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<small){
            small=arr[i];
        }
        if(arr[i]>large){
            large=arr[i];
        }
    }
    printf("Smallest = %d , Largest = %d\n",small,large);
}