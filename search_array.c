#include <stdio.h>
int main()
{
    int a[100], n, i, num, found=0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i=0; i<n; i++)
    {
        if(a[i]==num)
        {
            found=1;
            break;
        }
    }

    if(found==1)
        printf("Number found at position %d", i+1);
    else
        printf("Number not found");

    return 0;
}