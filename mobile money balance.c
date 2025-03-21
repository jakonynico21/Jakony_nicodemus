#include <stdio.h>

int main() {
    int balance = 50000; // Initial balance
    int withdrawal = 20000; // Amount to withdraw

    // Calculate the remaining balance
    int remaining_balance = balance - withdrawal;

    // Display the remaining balance
    printf("Your remaining balance is: %d\n", remaining_balance);

    return 0;
}