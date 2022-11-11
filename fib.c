#include<stdio.h>
int main()
{
    int num,fib=1,alpha,fib0=0,fib1=1;
    printf("enter the number for which fibinicco series fumction to be calculated\n");
    scanf("%d",&num);
    if (num==1)
    {
        printf("%d",fib0);
    }
    else if (num==2)
    {

        printf("\n%d",fib1);
    }
    // fib1=fib0+fib1;
    else
       {
         for (int i = 2; i < num; i++)
         {

           fib=fib0+fib1;  
           fib0=fib1;
           fib1=fib;
         }
         printf("\n%d",fib);

       }
    return 0;
}
