#include <stdio.h>

int main() {
    float grossSales, returns, discount, netSales;

    printf("Enter gross sales: ");
    scanf("%f", &grossSales);

    printf("Enter returns: ");
    scanf("%f", &returns);

    printf("Enter discount: ");
    scanf("%f", &discount);

    netSales = grossSales - returns - discount;

    printf("Net Sales = %.2f", netSales);

    return 0;
}