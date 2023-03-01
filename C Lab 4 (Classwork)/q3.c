#include<stdio.h>
int main() {
    int n, sum=0, rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n&10; /* taking last digit of number */
        sum+=rem;
        n/=10; //skipping last digit
    }
    printf("Sum of the digits = %d\n",sum);
}