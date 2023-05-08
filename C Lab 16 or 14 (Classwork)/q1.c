/*Q1.WAP in C to input n integers in an array and display the occurrences of all the elements.
Example a[]={1, 2,1,6,3,2,6,1,8}. Using pointer.
O/P:
    1 available 3 times
    2 available 2 times
    6 available 2 times
    3 available 1 times
    8 available 1 times*/
#include <stdio.h>
void main()
{
    int a[] = {1, 2, 1, 6, 3, 2, 6, 1, 8};
    int i, j, n = 9;
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == -1)
            {
                i++;
                continue;
            }
            else if (a[i] == a[j])
            {
                ++count;
                a[j] = -1;
            }
            
        }
        printf("%d available %d times\n",a[i],count);
    }
}