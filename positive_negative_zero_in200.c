#include <stdio.h>
int main()
{
    int i, n, pos=0, neg=0, zero=0;

    printf("Enter 200 numbers:\n");

    for(i=1; i<=200; i++)
    {
        scanf("%d", &n);

        if(n>0)
            pos++;
        else if(n<0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zero = %d", zero);
    return 0;
}