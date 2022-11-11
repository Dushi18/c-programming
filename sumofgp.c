#include<stdio.h>

int power(int x, int y)
{
   int i,exp=1;
   for ( i = 1; i <= y; i++)
   {
       exp=exp*x;
   }
   return exp;
}
int geometric(int num1, int num2, int num3, int count)
{
  int alpha,ratio,sum,beeta,rem;
  ratio=num2/num1;
  beeta=(power(ratio,count))-1;
  alpha=num1*beeta;
  rem=ratio-1;
  sum=alpha/rem;

  return sum;
}

int main()
{
    int count,num1,num2,num3;
    printf("enter three numbers of a gp\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("enter no. of terms for wwhich you want sum of this progression\n");
    scanf("%d",&count);
    printf("\n the sum of first %d terms of this gp is %d",count,geometric(num1,num2,num3,count));
    return 0;
}
