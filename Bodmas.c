#include<stdio.h>
void main()
{
    float a, b, s, d, m, q;

    printf("Enter 2 nos.  : ");
    scanf("%d %d", &a, &b);

    s=a + b;
    d=a - b;
    m=a * b;
    q=a / b;

    printf("%.2f + %.2f = %.2f\n", a, b, s);
    printf("%.2f + %.2f = %.2f\n", a, b, d);
    printf("%.2f + %.2f = %.2f\n", a, b, m);
    printf("%.2f + %.2f = %.2f\n", a, b, q); 

}