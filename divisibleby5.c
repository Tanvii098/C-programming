#include <stdio.h>
int main()
{
    int i;

    for(i=1; i<=100; i++)
    {
        if(i%5==0)
            printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int i, sum=0;

    for(i=1; i<=100; i++)
    {
        if(i%3==0)
            sum=sum+i;
    }

    printf("Sum = %d", sum);
    return 0;
}