#include <stdio.h>

int main() {
    int number;
    input:
    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid input. Please try again.\n");
        goto input;
    }

    printf("You entered: %d\n", number);
    return 0;
}
