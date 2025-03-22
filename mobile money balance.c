#include <stdio.h>

int main() {
    int initial_balance = 50000; // Initial balance
    int withdrawal = 20000; // Amount to withdraw

    // Calculate the remaining balance
    int remaining_balance = initial_balance - withdrawal;

    // Display the remaining balance
    printf("Your remaining balance is ugx%d\n", remaining_balance);

    return 0;
}
