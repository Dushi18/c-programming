#include<stdio.h>

int fib_rec(int a)
{
    int alpha;
    if (a==1)
    {
        return 0;
    }
    else if (a==2)
    {
        return 1;
    }
    else
    {
        
        return fib_rec(a-2)+fib_rec(a-1);
    }
}
int main()
{
    int num;
    printf("enter the number of element of fib series\n");
    scanf("%d",&num);
    printf("%d",fib_rec(num));
    return 0;
}
