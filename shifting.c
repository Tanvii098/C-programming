#include <stdio.h>
int main()
{
    int a[10], b[10];
    int i, n, choice;

    printf("Enter 10 values:\n");

    for(i=0; i<10; i++)
        scanf("%d", &a[i]);

    printf("Enter positions to shift: ");
    scanf("%d", &n);

    printf("1. Left shift\n2. Right shift\n");
    scanf("%d", &choice);

    if(n<0)
    {
        printf("Invalid positions");
        return 0;
    }

    if(n>10)
        n=10;

    for(i=0; i<10; i++)
        b[i]=0;

    if(choice==1)
    {
        for(i=0; i<10-n; i++)
            b[i]=a[i+n];
    }
    else if(choice==2)
    {
        for(i=0; i<10-n; i++)
            b[i+n]=a[i];
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Shifted array:\n");

    for(i=0; i<10; i++)
        printf("%d ", b[i]);

    return 0;
}