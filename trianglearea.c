#include<stdio.h>
/*int root(int n)
{

}*/
int verify(int a, int b, int c)
{
   if (a+b>c && b+c>a && a+c>b )
   {
       printf("\n these sides form a triangle");
       if (a==b)
       {
           if (b==c)
           {
               printf("\nthis is an equilateral triangle.");
           }
           else
           printf("\nthis is an isosceles triangle.");
       }
       else
           {
               if (b==c)
               {
                   printf("\nthis is an isosceles triangle");
               }
               else
                   printf("\nthis is a scalene triangle");
           }
       return 1;
   }
   else
   {
      printf("\n these sides dont form a triangle");
      return 0;
   }
}
int area(int a,int b,int c)
{
   int root,alpha,p,s,x,y,z;
   p=a+b+c;
   s=p/2;
   x=s-a;
   y=s-b;


   z=s-c;
   alpha=s*x*y*z;
   return alpha;
}

int main()
{
    int a,b,c,d;
    printf("enter three sides os a traingle\n");
    scanf("%d %d %d",&a,&b,&c);
    d = verify(a,b,c);
    if (d>0)
    {
    printf("\n square of area of this triangle by heron's formula is %d",area(a,b,c));    
    }
    else
    printf("\njabardsti hai kya bhai!");
    
    return 0;
}
