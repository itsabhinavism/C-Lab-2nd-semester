#include<stdio.h>
int main () {
int n,rem,prod=1;

printf("Type - ");
scanf("%d",&n);

while(n>0) {
rem=n%10;
n/=10;
prod *= rem;
}

printf("the prod - %d",prod);
    return 0;
}