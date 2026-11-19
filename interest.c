#include <stdio.h>

int main() {
    float P, R, N, I;

    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest: ");
    scanf("%f", &R);

    printf("Enter Number of years: ");
    scanf("%f", &N);

    I = (P * R * N) / 100;

    printf("Interest = %.2f", I);

    return 0;
}