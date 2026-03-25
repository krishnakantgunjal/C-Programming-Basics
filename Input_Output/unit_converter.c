#include <stdio.h>

/*
 * Program to convert various units: Length, Time, Temperature, Mass, Frequency.
 * Demonstrates the use of functions and switch-case statements.
 */

// Function prototypes
void convert_length(float meter);
void convert_time(float minute);
void convert_temperature(float celsius);
void convert_mass(float gram);
void convert_frequency(float hertz);

int main() {
    int choice;

    printf("\n --- UNIT CONVERSION MENU --- ");
    printf("\n1. Length (Meter to KM/CM)");
    printf("\n2. Time (Minute to Sec/MS)");
    printf("\n3. Temperature (Celsius to Kelvin/Fahrenheit)");
    printf("\n4. Mass (Gram to KG/MG)");
    printf("\n5. Frequency (Hertz to KHZ/MHZ/GHZ)");
    printf("\nEnter your choice (1-5): ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (choice) {
        case 1: {
            float meter;
            printf("Enter length in meters: ");
            scanf("%f", &meter);
            convert_length(meter);
            break;
        }
        case 2: {
            float min;
            printf("Enter time in minutes: ");
            scanf("%f", &min);
            convert_time(min);
            break;
        }
        case 3: {
            float temp;
            printf("Enter temperature in Degree Celsius: ");
            scanf("%f", &temp);
            convert_temperature(temp);
            break;
        }
        case 4: {
            float mass;
            printf("Enter mass in Grams: ");
            scanf("%f", &mass);
            convert_mass(mass);
            break;
        }
        case 5: {
            float freq;
            printf("Enter frequency in Hertz: ");
            scanf("%f", &freq);
            convert_frequency(freq);
            break;
        }
        default:
            printf("Invalid selection! Please choose from the menu.\n");
            break;
    }

    return 0;
}

void convert_length(float x) {
    printf("\n--- Length Conversion ---");
    printf("\nMeter: %.2f", x);
    printf("\nKilometer: %.4f", 0.001 * x);
    printf("\nCentimeter: %.2f\n", 100 * x);
}

void convert_time(float t) {
    printf("\n--- Time Conversion ---");
    printf("\nMinute: %.2f", t);
    printf("\nSecond: %.2f", 60 * t);
    printf("\nMillisecond: %.2f\n", 60000 * t);
}

void convert_temperature(float deg) {
    printf("\n--- Temperature Conversion ---");
    printf("\nDegree Celsius: %.2f", deg);
    printf("\nKelvin: %.2f", deg + 273.15); // Corrected formula (original was 274.15 * deg)
    printf("\nFahrenheit: %.2f\n", (deg * 9 / 5) + 32); // Corrected formula (original was 33.8 * deg)
}

void convert_mass(float g) {
    printf("\n--- Mass Conversion ---");
    printf("\nGram: %.2f", g);
    printf("\nKilogram: %.4f", 0.001 * g);
    printf("\nMilligram: %.2f\n", 1000 * g);
}

void convert_frequency(float h) {
    printf("\n--- Frequency Conversion ---");
    printf("\nHertz: %.2f", h);
    printf("\nKilohertz: %.4f", 0.001 * h);
    printf("\nMegahertz: %.6f", 0.000001 * h);
    printf("\nGigahertz: %.9f\n", 0.000000001 * h);
}
