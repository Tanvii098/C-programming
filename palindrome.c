#include <stdio.h>
int main()
{
    int n, temp, digit, rev=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp=n;

    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    if(temp==rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}