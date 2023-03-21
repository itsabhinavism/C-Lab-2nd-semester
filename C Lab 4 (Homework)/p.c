#include <stdio.h>

int main(){
int n, fact=1;
printf("n - ");
scanf("%d",&n);
while(n>1) {
    fact*=n;
    n--;
}
    printf("%d",fact);
    return 0;
}