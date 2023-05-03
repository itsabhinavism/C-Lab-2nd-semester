//Pattern 19
#include<stdio.h>
void main(){
    int n;
    printf("Enter  n: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int p=n;
        for(int j=1;j<=i;j++){
            printf("%d",p++);
        }
        p--;
        for(int j=1;j<i;j++){
            printf("%d",--p);
        }
        printf("\n");
    }
}