#include<stdio.h>
int main()
{
    int n,count=0,rem;
    printf("Enter the number :\n");
    scanf("%d",&n);
    do
    {
        n/=10;
        count++;
    } while (n>0);
    printf("Number of the digits = %d\n",count);
    
}