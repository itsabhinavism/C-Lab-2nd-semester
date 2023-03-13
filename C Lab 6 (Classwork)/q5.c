#include <stdio.h>

float main(){
    int a,b;
    printf("Type the value- ");
    scanf("%d",&a); scanf("%d",&b);
    
    printf("The reverse of the number is %d %d", &a,&b );
    return 0;
}