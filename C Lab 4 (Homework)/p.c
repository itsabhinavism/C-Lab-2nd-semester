#include <stdio.h>

int main(){
int t1=0,t2=1,nextTerm=0,n;

printf("Type the number - ");
scanf("%d",&n);

nextTerm = t1+t2;

while (nextTerm<=n)
    {
        printf("%d\t",nextTerm );
        t1=t2;
        t2=nextTerm;
        nextTerm= t1+ t2;
    }
    return 0;
}