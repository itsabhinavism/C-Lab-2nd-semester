//q5)Find Leap Year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("Leap Year\n");
    }
    else
        printf("Not a Leap Year\n");
}