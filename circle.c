#include <stdio.h>

int main() {
    float radius, area, perimeter;
    float pi = 3.14159;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}