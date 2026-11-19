#include <stdio.h>

int main() {
    float dollar, rupees;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollar);

    rupees = dollar * 48;

    printf("Amount in rupees = %.2f", rupees);

    return 0;
}

