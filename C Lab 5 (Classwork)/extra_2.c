// write a c program to input a year and a number . Print the number of  leap year after the n term.
#include <stdio.h>

int main () {
    int yr, n;
    printf("enter year: ");
    scanf("%d", &yr);
    printf("enter no of terms: ");
    scanf("%d", &n);
    int i=1;
    while (i<=n) {
        if (yr%4==0 && yr%400==0) {
            printf("%d ", yr);
            i++;
        }
        yr++;
    }
    return 0;
}