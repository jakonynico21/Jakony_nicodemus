#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float convertToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

// Function to check comfort level based on current and desired temperatures
void checkComfortLevel(float currentTempF, float desiredTempF) {
    if (currentTempF >= desiredTempF - 10 && currentTempF <= desiredTempF + 10) {
        printf("Comfortable\n");
    } else if (currentTempF < desiredTempF - 10) {
        printf("Too Cold\n");
    } else {
        printf("Too Hot\n");
    }
}

int main() {
    float currentTempC = 25; // Example current temperature in Celsius
    float desiredTempC = 22; // Example desired temperature in Celsius

    float currentTempF = convertToFahrenheit(currentTempC);
    float desiredTempF = convertToFahrenheit(desiredTempC);

    printf("Current Temperature: %.2f°F\n", currentTempF);
    printf("Desired Temperature: %.2f°F\n", desiredTempF);

    checkComfortLevel(currentTempF, desiredTempF);

    return 0;
}