// Library Inventory Management System
// This program manages the availability of books in different subjects

#include <stdio.h>

// Function prototypes
void showAvailability(int availableBooks[], int size, const char* subject);
int checkAvailability(int availableBooks[], int size, int bookID);
void borrowBook(int availableBooks[], int size, int bookID);
void displayTemperatureAction(float current, float desired);

int main() {
    // Arrays for available books in each subject
    int chemistryBooks[5] = {1, 2, 3, 4, 5};
    int biologyBooks[5] = {6, 7, 8, 9, 10};
    int physicsBooks[5] = {11, 12, 13, 14, 15};
    int mathsBooks[5] = {16, 17, 18, 19, 20};
    int englishBooks[5] = {21, 22, 23, 24, 25};
    int geography1Books[5] = {26, 27, 28, 29, 30};
    int geography2Books[5] = {31, 32, 33, 34, 35};

    int choice, bookID;
    float current, desired;

    while (1) {
        printf("\nLibrary Inventory Management\n");
        printf("1. Show current availability\n");
        printf("2. Process checkouts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Select a subject:\n");
                printf("1. Chemistry\n");
                printf("2. Biology\n");
                printf("3. Physics\n");
                printf("4. Maths\n");
                printf("5. English\n");
                printf("6. Geography 1\n");
                printf("7. Geography 2\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        showAvailability(chemistryBooks, 5, "Chemistry");
                        break;
                    case 2:
                        showAvailability(biologyBooks, 5, "Biology");
                        break;
                    case 3:
                        showAvailability(physicsBooks, 5, "Physics");
                        break;
                    case 4:
                        showAvailability(mathsBooks, 5, "Maths");
                        break;
                    case 5:
                        showAvailability(englishBooks, 5, "English");
                        break;
                    case 6:
                        showAvailability(geography1Books, 5, "Geography 1");
                        break;
                    case 7:
                        showAvailability(geography2Books, 5, "Geography 2");
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
                break;
            case 2:
                printf("Enter book ID: ");
                scanf("%d", &bookID);

                // Check availability in each subject
                if (checkAvailability(chemistryBooks, 5, bookID)) {
                    borrowBook(chemistryBooks, 5, bookID);
                    printf("Book %d has been borrowed from Chemistry.\n", bookID);
                } else if (checkAvailability(biologyBooks, 5, bookID)) {
                    borrowBook(biologyBooks, 5, bookID);
                    printf("Book %d has been borrowed from Biology.\n", bookID);
                } else if (checkAvailability(physicsBooks, 5, bookID)) {
                    borrowBook(physicsBooks, 5, bookID);
                    printf("Book %d has been borrowed from Physics.\n", bookID);
                } else if (checkAvailability(mathsBooks, 5, bookID)) {
                    borrowBook(mathsBooks, 5, bookID);
                    printf("Book %d has been borrowed from Maths.\n", bookID);
                } else if (checkAvailability(englishBooks, 5, bookID)) {
                    borrowBook(englishBooks, 5, bookID);
                    printf("Book %d has been borrowed from English.\n", bookID);
                } else if (checkAvailability(geography1Books, 5, bookID)) {
                    borrowBook(geography1Books, 5, bookID);
                    printf("Book %d has been borrowed from Geography 1.\n", bookID);
                } else if (checkAvailability(geography2Books, 5, bookID)) {
                    borrowBook(geography2Books, 5, bookID);
                    printf("Book %d has been borrowed from Geography 2.\n", bookID);
                } else {
                    printf("Book %d is not available.\n", bookID);
                }
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void showAvailability(int availableBooks[], int size, const char* subject) {
    printf("\nAvailable Books in %s:\n", subject);
    for (int i = 0; i < size; i++) {
        printf("%d ", availableBooks[i]);
    }
    printf("\n");
}

int checkAvailability(int availableBooks[], int size, int bookID) {
    for (int i = 0; i < size; i++) {
        if (availableBooks[i] == bookID) {
            return 1;
        }
    }
    return 0;
}

void borrowBook(int availableBooks[], int size, int bookID) {
    for (int i = 0; i < size; i++) {
        if (availableBooks[i] == bookID) {
            availableBooks[i] = 0;
            break;
        }
    }
}

void displayTemperatureAction(float current, float desired) {
    if (current < desired - 3) {
        printf("Heating\n");
    } else if (current > desired + 3) {
        printf("Cooling\n");
    } else {
        printf("Ideal\n");
    }
}