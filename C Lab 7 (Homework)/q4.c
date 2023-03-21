#include <stdio.h>
int main()
{
    int arr[5] = {20, 80, 70, 10, 50};
    printf("Elements with at least two smaller elements: ");
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] < arr[i])
            {
                count++;
            }
        }
        if (count >= 2)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}