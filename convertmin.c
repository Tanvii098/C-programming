#include<stdio.h>
void main()
{
    int h, m, t;

    printf("Enter total minutes : ");
    scanf("%d", &t);

    h=t/60;
    m=t%60;

    printf("%d min = %d hour %d min\n", t, h, m);
} 