#include <stdio.h>

int main() {
    float base, height, side1, side2, side3;
    float area, perimeter;

    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    printf("Enter three sides: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    area = 0.5 * base * height;
    perimeter = side1 + side2 + side3;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}