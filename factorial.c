#include <stdio.h>

int main()
{
    int i,j=1,num;
    printf("enter a number\n ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        j=j*i;
        
     printf(" the factorial of %d is %d",num,j);
    }
      
    return 0;
}
