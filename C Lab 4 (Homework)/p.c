#include<stdio.h>
int main () {
int n,rem,sum=0;

printf("Type - ");
scanf("%d",&n);

while(n>0) {
rem=n%10;
n/=10;
sum += rem;
}

printf("the sum - %d",sum);
    return 0;
}