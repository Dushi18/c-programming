#include <stdio.h>

int main()
{
    int a,b=1;
    printf("enter a number for table");
    scanf("\n %d",&a);
do
{
    printf("\n %d*%d=%d",a,b,a*b);
    b=b+1; 
} while (b<10);

    return 0;
}
