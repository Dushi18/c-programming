#include<stdio.h>
int square(int a)
{
    int alpha;
    alpha=a*a;
    return alpha;
}
int main()
{
    int num1;
    printf("enter a number \n");
    scanf("%d",&num1);
    printf("square of a is %d",square(num1));
    return 0;
}
