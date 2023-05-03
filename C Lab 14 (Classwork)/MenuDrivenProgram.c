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
    while (1)
    {
        int n;
        printf("Enter the choice: ");
        scanf("%d", &n);
        return n;
    }
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
void insertbegin(int n, int v[])
{
    int d;
    printf("Enter the element to be added:");
    scanf("%d", &d);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = v[i];
    }
    v[0] = d;
    for (int i = 1; i < n + 1; i++)
    {
        v[i] = b[i - 1];
    }
    printf("The new array is: ");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d\t", v[i]);
    }
}
void insertany(int n, int v[])
{
    int a, b;
    printf("Enter the index:");
    scanf("%d", &a);
    printf("Enter the element:");
    scanf("%d", &b);
    int c[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        if (i < a)
        {
            c[i] = v[i];
        }
        else if (i == a)
        {
            c[i] = b;
        }
        else
        {
            c[i] = v[i - 1];
        }
    }
    printf("The new array is: ");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d\t", c[i]);
    }
}
void deleteend(int n, int v[])
{
    n--;
    printf("The new array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", v[i]);
    }
}
void deletebegin(int n, int v[])
{
    for (int i = 0; i < n - 1; i++)
    {
        v[i] = v[i + 1];
    }
    n--;
    printf("The new array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", v[i]);
    }
}
void deleteany(int n, int v[])
{
    int a;
    printf("Enter the index to be deleted: ");
    scanf("%d", &a);
    for (int i = a; i < n - 1; i++)
    {
        v[i] = v[i + 1];
    }
    n--;
    printf("The new array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", v[i]);
    }
}
void search(int n, int v[])
{
    int a = -1;
    int b;
    printf("Enter the element to be searched: ");
    scanf("%d", &b);
    for (int i = 0; i < n; i++)
    {
        if (v[i] == b)
        {
            a = i;
            break;
        }
    }
    if (a == -1)
    {
        printf("The key was not found.\n");
    }
    else
    {
        printf("The element is found at index %d.\n", a);
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
    case 4:
        insertany(b, arr);
        break;
    case 5:
        deleteend(b, arr);
        break;
    case 6:
        deletebegin(b, arr);
        break;
    case 7:
        deleteany(b, arr);
        break;
    case 8:
        search(b, arr);
    default:
        return 0;
    }
}