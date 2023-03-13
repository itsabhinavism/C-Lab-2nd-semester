#include <stdio.h>

int main() {
    int num1, num2, result;

    // Ask user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic calculations
    result = num1 + num2;
    printf("Addition: %d\n", result);

    result = num1 - num2;
    printf("Subtraction: %d\n", result);

    result = num1 * num2;
    printf("Multiplication: %d\n", result);

    if (num2 != 0) {
        result = num1 / num2;
        printf("Division: %d\n", result);

        result = num1 % num2;
        printf("Modulus: %d\n", result);
    } else {
        printf("Cannot perform division and modulus since num2 is 0\n");
    }

    return 0;
}
