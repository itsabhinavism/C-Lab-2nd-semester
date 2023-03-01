#include<stdio.h>
int main()
{
    int n,prod=1,rem;
    printf("Enter the number.\n");
    scanf("%d",&n);
    while (n>0)
    {
       rem=n%10;
       prod*=rem;
       n/=10;
    }
    printf(" Product of the digits is  : %d\n",prod);
    return 0;
    
}