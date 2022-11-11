#include <stdio.h>

int multiple(int a, int b)
{
    int fact;
    fact=a*b;
    return fact;
}

int main()
{
    int i,num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("\n the table of %d is as follows",num);
    for (i = 1; i < 11; i++)
    {
        printf("\n %d*%d=%d",num,i,multiple(i,num));
    }  
    return 0;
}

