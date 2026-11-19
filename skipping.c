#include <stdio.h>
int main()
{
    int a[5], b[10], i;

    printf("Enter 5 values:\n");

    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    for(i=0; i<10; i++)
        b[i]=0;

    for(i=0; i<5; i++)
    {
        if(i<2)
            b[i]=a[i];
        else if(i>2)
            b[i-1]=a[i];
    }

    printf("Copied array:\n");

    for(i=0; i<10; i++)
        printf("%d ", b[i]);

    return 0;
}