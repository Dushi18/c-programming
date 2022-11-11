#include<stdio.h>
int eo(int x)
{
  int num;
  num=x%2;
  if (num==0)
  {
      return 1;
  }
  else
  {
      return 0;
  }

}
int main()
{
    int a,b;
    printf("enter a number\n");
    scanf("%d",&a);
    b=eo(a);
    if (b==1)
    {
        printf("\nan even number");
    }
    else if (b==0])
    {
        printf("\n an odd number");
    }
    
    return 0;
}
