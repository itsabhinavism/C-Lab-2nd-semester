//q4)Copy the elements of an array to another array
#include<stdio.h>
void main(){
    int a[5]={1,2,3,4,5};
    int b[5];
    for(int i=0;i<5;i++){
        b[i]=a[i];
    }
    printf("The Array b is: ");
    for(int i=0;i<5;i++){
        printf("%d",b[i]);
    }
}