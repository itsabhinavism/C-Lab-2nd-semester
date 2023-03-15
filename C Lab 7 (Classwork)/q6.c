//q6)Reverse the elements of an array
#include<stdio.h>
void main(){
    int i,j,temp,arr[5]={2,9,7,6,5};
    for(i=0,j=4;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("After reversing the array is: ");
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}