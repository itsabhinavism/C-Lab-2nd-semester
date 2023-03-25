#include <stdio.h>

int main(){
int a,b,c;

printf("Type a - ");
scanf("%d",&a);
    
    printf("Type b - ");
scanf("%d",&b);
    
    printf("Type c - ");
scanf("%d",&c);
    if(a>0) {

    if( a>=b && a>= c)
    printf("a is the largest.");

        if(b>=a && b>= c)
    printf("b is the largest.");
    }
    
    else {
        printf("c is largest number.");
    }
    return 0;
}