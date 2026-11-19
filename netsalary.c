#include <stdio.h>

int main() {
    float basic, allowance, deduction, netSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter allowance: ");
    scanf("%f", &allowance);

    printf("Enter deduction: ");
    scanf("%f", &deduction);

    netSalary = basic + allowance - deduction;

    printf("Net Salary = %.2f", netSalary);

    return 0;
}