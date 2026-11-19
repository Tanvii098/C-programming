#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp[100];

    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(temp, str);
    strrev(temp);

    if(strcmp(str, temp)==0)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");

    return 0;
}