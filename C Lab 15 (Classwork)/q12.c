//Pattern 12
#include<stdio.h>
void main(){
    int n;
    printf("Enter  n: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",n-1-j);
        }
        printf("\n");
    }
}