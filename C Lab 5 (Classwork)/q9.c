//q9)Find the sum of numbers entered using for loop
#include<stdio.h>
void main()
{
    int n,sum=0;
    for(;n!=0;sum+=n){   
       printf("Enter The Number (0 to Stop) \n");
       scanf("%d",&n);
    } 
    printf("Sum of the Numbers \n%d",sum);
}