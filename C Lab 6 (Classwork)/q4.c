#include <stdio.h>
#include <math.h> 
int main(){
int n = 2;
printf("The prime numbers are: ");

while (n <= 99)
{
    int flag = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf(" %d", n);
    }
    n++;
}
}