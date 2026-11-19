#include <stdio.h>
int main()
{
    int a[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    if(n<=0)
    {
        printf("Array is empty");
        return 0;
    }

    n--;

    printf("New array:\n");

    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}