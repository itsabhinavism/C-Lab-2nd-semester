#include <stdio.h>

int main()
{
    int arr[100] ;
    int n, x ; 
    printf("\n Enter the Size of the arrays");
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {   
        printf("\n Enter The Array 1 Elements");
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the Element to be deleted");
    scanf("%d",&x);
    int i, j;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; 
            i--;
        }
    }

    printf("Modified array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}