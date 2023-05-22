/*Q1.WAP in C to input n integers in an array and display the occurrences of all the elements.
Example a[]={1, 2,1,6,3,2,6,1,8}. Using pointer.
O/P:
    1 available 3 times
    2 available 2 times
    6 available 2 times
    3 available 1 times
    8 available 1 times*/
#include <stdio.h>
#include <limits.h>
void main()
{
    int a[100];
    int i, j, n;
    printf("ENTER THE NUMBER OF ELEMENTS");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE ELEMENTS");
        scanf("%d", &a[i]);
    }
    int *p;
    p = a;
    for (i = 0; i < n; i++)
    {
        int count = 1;
        if (p[i] != INT_MIN)
        {
            for (j = i + 1; j < n; j++)
            {
                if (p[i] == p[j])
                {
                    ++count;
                    p[j] = INT_MIN;
                }
            }
            printf("\n %d available %d times", p[i], count);
        }
    }
}