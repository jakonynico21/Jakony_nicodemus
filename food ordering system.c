#include <stdio.h>

#define MAX_MENU_ITEMS 10
#define TAX_RATE 0.07

// Struct for menu items
struct MenuItem {
    int code;
    char name[50];
    float price;
};

// Function to calculate total
void calculateTotal(struct MenuItem menu[], int order[], int numItems, float *subtotal, float *tax, float *grandTotal) {
    int i;
    *subtotal = 0;

    for (i = 0; i < numItems; i++) {
        *subtotal += menu[order[i]].price;
    }

    *tax = *subtotal * TAX_RATE;
    *grandTotal = *subtotal + *tax;
}

// Function to display menu
void displayMenu(struct MenuItem menu[], int numItems) {
    int i;

    printf("Menu:\n");
    printf("Code\tName\t\tPrice\n");
    printf("---------------------------------\n");

    for (i = 0; i < numItems; i++) {
        printf("%d\t%s\t%.2f\n", menu[i].code, menu[i].name, menu[i].price);
    }
}

// Function to format currency output
void formatCurrency(float amount, char *formattedAmount) {
    sprintf(formattedAmount, "$%.2f", amount);
}

int main() {
    struct MenuItem menu[MAX_MENU_ITEMS] = {
        {101, "Burger", 10.99},
        {102, "Fries", 3.99},
        {103, "Soda", 1.99},
        // Add more menu items here
    };

    int order[MAX_MENU_ITEMS];
    int numItems = 0;
    int choice;
    float subtotal, tax, grandTotal;
    char formattedSubtotal[10], formattedTax[10], formattedGrandTotal[10];

    while (1) {
        displayMenu(menu, MAX_MENU_ITEMS);
        printf("\nEnter item code (0 to finish): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        order[numItems++] = choice - 1; // Adjust index to match array indices
    }

    calculateTotal(menu, order, numItems, &subtotal, &tax, &grandTotal);

    formatCurrency(subtotal, formattedSubtotal);
    formatCurrency(tax, formattedTax);
    formatCurrency(grandTotal, formattedGrandTotal);

    printf("\nOrder Receipt:\n");
    printf("---------------------------------\n");

    for (int i = 0; i < numItems; i++) {
        printf("%s\t%.2f\n", menu[order[i]].name, menu[order[i]].price);
    }

    printf("---------------------------------\n");
    printf("Subtotal: %s\n", formattedSubtotal);
    printf("Tax: %s\n", formattedTax);
    printf("Grand Total: %s\n", formattedGrandTotal);

    return 0;
}