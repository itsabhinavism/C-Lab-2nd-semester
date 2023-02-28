#include<stdio.h>
//find the average of three marks//
int main()
{
   int x, y, z;           
   float avg;
   printf("Enter Three Numbers : \n");    
   scanf("%d %d %d",&x, &y, &z);     
 
   avg=(x+y+z)/3.0;                  
   printf("Average of Three Numebers is : %f",avg);
}
