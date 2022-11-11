#include<stdio.h>

int factorial(int whole)
  {   
      if (whole == 0 || whole == 1)

      {
          return 1;
      }
      else
          return (whole*factorial(whole-1));
  }
 int main()
 {
    int a;
    printf("enter a number of which you want factorial of\n");          
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,factorial(a)); 
     return 0;
 }
          