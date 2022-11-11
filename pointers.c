#include<stdio.h>
int main()
{
    int a=5,b;
    printf("enter a number\n");
    
    int* ptrb=&a;
    printf("\naddress of a=%d ",ptrb);
    printf("\naddress of a=%d ",&a);
    a++;
    printf("\naddress of a+1=%d ",ptrb+1);
    printf("\naddress of a+1=%d ",a);
    printf("\naddress of a+1=%d ",&a);
    
    
    
    return 0;
}
