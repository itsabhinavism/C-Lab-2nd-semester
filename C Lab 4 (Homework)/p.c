#include<stdio.h>
int main () {
int n,rem,sum=0;

printf("Type - ");
scanf("%d",&n);

while(n!=0) {
rem=n%10;
sum = (n/10) + rem;
}

printf("the sum - %d",sum);
    return 0;
}