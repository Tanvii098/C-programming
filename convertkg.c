#include<stdio.h>

int main() {
    float grams, kg;

    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    kg = grams / 1000;

    printf("Weight in kilograms = %.2f kg", kg);

    return 0;
}