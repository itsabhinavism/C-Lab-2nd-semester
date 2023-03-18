// q2)Print whether number is even or odd #include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}