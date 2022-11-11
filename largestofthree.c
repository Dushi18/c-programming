#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter three numbers.");
    scanf("\n %d \n %d \n %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)    
        {
            printf("\n %d is largest",a);
        }
        else
            printf("\n %d is largest",c);
    }
    else
        if (b>c)    
        {
            printf("\n %d is largest",b);
        }
        else
            printf("\n %d is largst",c);
        
    return 0;
}
