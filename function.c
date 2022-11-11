#include<stdio.h>

int printmarks(int a, int b)
{
    return a + b;
}
int main()

{
    int a,b;
    printf("enter two numbers");
    scanf("\n%d\n%d",&a,&b);
    printmarks();
    return 0;
}
