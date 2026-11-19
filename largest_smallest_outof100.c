#include <stdio.h>
int main()
{
    int i, n, largest, smallest;

    printf("Enter 100 numbers:\n");
    scanf("%d", &n);

    largest=smallest=n;

    for(i=2; i<=100; i++)
    {
        scanf("%d", &n);

        if(n>largest)
            largest=n;

        if(n<smallest)
            smallest=n;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);
    return 0;
}