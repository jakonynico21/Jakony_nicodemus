#include <stdio.h>

int main() {
    int number;

    // Using goto for input validation
    input:
    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid input. Please try again.\n");
        goto input; // Jump back to the input label
    }

    printf("You entered: %d\n", number);
    return 0;
}