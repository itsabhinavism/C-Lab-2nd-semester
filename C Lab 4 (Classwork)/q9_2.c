#include <stdio.h>

int main() {
    int sum = 0, num;
    char choice;
    
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
        
        printf("Do you want to enter another number? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    
    printf("Sum of numbers entered: %d\n", sum);
    
    return 0;
}
