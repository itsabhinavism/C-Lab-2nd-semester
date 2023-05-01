/*Write a menu driven program to perform the following operations in an array -
i) Displaying the array
ii)Insert at end
iii)Insert at beginning
iv)Inssert at any location
v)Delete at end
vi)Delete at beginning
vii)Delete at any location
viii)Search
ix)Exit*/

#include <stdio.h>
int menu()
{
    int n;
    printf("Enter the choice: ");
    scanf("%d", &n);
    return n;
}
void display(int n, int v[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", v[i]);
    }
}
void insertend(int n, int v[])
{
    int c;
    printf("Enter the element to be added:");
    scanf("%d", &c);
    v[n] = c;
    printf("The new array is:");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d\t", v[i]);
    }
}
int main()
{
    int arr[10];
    int b;
    printf("Enter the number to elements to be inserted:");
    scanf("%d", &b);
    printf("Enter the elements:\n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a = menu();
    switch (a)
    {
    case 1:
        display(b, arr);
        break;

    case 2:
        insertend(b, arr);
        break;
    case 3:
        insertbegin(b, arr);
        break;
    }