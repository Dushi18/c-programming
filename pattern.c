#include<stdio.h>
int main()
{
    int i,j,num,k=1;
    printf("enter a number\n");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        for( j=1; j <=i
        ; j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
    
    return 0;
}
