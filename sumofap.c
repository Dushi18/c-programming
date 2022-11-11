#include<stdio.h>
 int progression(int count,int num1,int num2,int num3)
 {
     int d,sum,alpha;
     d=num2-num1;
     alpha=2*num1+(count-1)*d;
     sum=count*alpha/2;
     return sum;
 }

int main()
{
    int num1,num2,num3,count;
    printf("enter first three no.s of an ap\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("\nenter no. of terms of upto which you want sum of this series\n");
    scanf("%d",&count);
    printf("\nsum of first %d terms of this progression is %d",count,progression(count,num1,num2,num3));
    return 0;
}
