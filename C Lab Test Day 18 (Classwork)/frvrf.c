#include <stdio.h>


{int main()
       int arr[ ]={1,2,3,4,5};
         int *ptr, i;
         ptr=arr+4;
         for(i=4; i>=0; i--)
         printf(“\n %d”, *(ptr-i) );
         return 0}
    

