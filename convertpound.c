#include<stdio.h>

int main() {
    float dollar, pound;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollar);

    pound = dollar * 48 / 70;

    printf("Amount in pounds = %.2f", pound);

    return 0;
}