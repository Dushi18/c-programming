#include<stdio.h>
int swap1(int num1, int num2)
{
int alpha;
alpha=num2;

return alpha;

}
int swap2(int num1, int num2)
{
    int beeta;
    beeta=num1;
    return beeta;
}
int main()
{
    int a,b;
    printf("enter two no.s a and b\n");
    scanf("%d%d",&a,&b);
    printf("\nentered numbers are (%d,%d)",a,b);
    printf("\nthe numbers after swapping are (%d,%d)",swap1(a,b),swap2(a,b));
    return 0;
}
