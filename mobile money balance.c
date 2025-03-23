#include <stdio.h>

int main() {
    int initial_balance = 50000;   // Initial mobile money balance
    int withdrawal = 20000; // Amount to withdraw

    // Calculate the remaining balance
    int remaining_balance = initial_balance - withdrawal ;

    // This is the amount withdrawn
    printf(" Yello, Jakony Nicodemus, You have withdrawn UGX %d\n", withdrawal);


    // This is the remaining balance
    printf("Your remaining Mobile Money balance is UGX %d\n", remaining_balance);

    // This is a thank you message
    printf("Thank you for using MTN MoMo\n");

    return 0;
}
