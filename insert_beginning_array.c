#include <stdio.h>
int main()
{
    int a[100], n, i, num;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter new number: ");
    scanf("%d", &num);

    for(i=n; i>0; i--)
        a[i]=a[i-1];

    a[0]=num;
    n++;

    printf("New array:\n");

    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}