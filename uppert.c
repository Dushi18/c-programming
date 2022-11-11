#include<stdio.h>

int main()
{
    int i,j,num1;
    printf("enter a number");
    scanf("%d",&num1);

    for ( i = num1; i>=1; i--)
    {
        for (j = 1; j<=i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
    return 0;



}
