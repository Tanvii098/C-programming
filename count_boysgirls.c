#include <stdio.h>
int main()
{
    int i, sex, boys=0, girls=0;

    printf("Enter sex code (1=Boy, 2=Girl):\n");

    for(i=1; i<=50; i++)
    {
        scanf("%d", &sex);

        if(sex==1)
            boys++;
        else if(sex==2)
            girls++;
    }

    printf("Boys = %d\n", boys);
    printf("Girls = %d", girls);
    return 0;
}