#include<stdio.h>
int main() {
//find the all the arithemetic operations using only 2 integer//
int x,y;
printf("Type the first integer - ");
scanf("%d", &x);

printf("Type the second integer - ");
scanf("%d", &y);

{float a;
a = x + y ;
printf("Addition - %f\n", a);}

{float b;
b = x - y ;
printf("Substraction - %f\n", b);}

{float c;
c = x * y ;
printf("Multiplication - %f\n", c);}

{float d;
d = x/y ;
printf("Division - %f\n", d);}

{float e;
e = x%y ;
printf("Remainder - %f\n", e);}

    return 0;
}
