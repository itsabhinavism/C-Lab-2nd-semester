#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Numbers from 1 to %d in row wise:\n", num);

    for (i = 1; i <= num; i++) {
        printf("%d", i);
    }

    return 0;
}
