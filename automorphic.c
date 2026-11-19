#include <stdio.h>
int main()
{
    int n, square, temp, flag=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    square=n*n;
    temp=n;

    while(temp>0)
    {
        if(temp%10 != square%10)
        {
            flag=0;
            break;
        }

        temp=temp/10;
        square=square/10;
    }

    if(flag==1)
        printf("Automorphic number");
    else
        printf("Not an Automorphic number");

    return 0;
}