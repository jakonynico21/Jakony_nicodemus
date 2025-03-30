#include <stdio.h>

// Function to calculate calories burned
float calculateCalories(int exerciseType, float duration) {
    float caloriesPerMinute;

    switch (exerciseType) {
        case 1: // Running
            caloriesPerMinute = 10;
            break;
        case 2: // Swimming
            caloriesPerMinute = 8;
            break;
        case 3: // Cycling
            caloriesPerMinute = 6;
            break;
        default:
            printf("Invalid exercise type.\n");
            return -1;
    }

    return caloriesPerMinute * duration;
}

// Main program
int main() {
    int exerciseType;
    float duration;
    float caloriesBurned;

    printf("Fitness Tracker Calorie Calculator\n");
    printf("1. Running\n");
    printf("2. Swimming\n");
    printf("3. Cycling\n");

    printf("\nEnter exercise type (1-3): ");
    scanf("%d", &exerciseType);

    printf("Enter duration in minutes: ");
    scanf("%f", &duration);

    caloriesBurned = calculateCalories(exerciseType, duration);

    if (caloriesBurned != -1) {
        printf("\nExercise Type: ");

        switch (exerciseType) {
            case 1:
                printf("Running\n");
                break;
            case 2:
                printf("Swimming\n");
                break;
            case 3:
                printf("Cycling\n");
                break;
        }

        printf("Duration: %.2f minutes\n", duration);
        printf("Calories Burned: %.2f calories\n", caloriesBurned);
    }

    return 0;
}