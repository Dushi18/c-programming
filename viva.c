#include<stdio.h> 
#include<math.h>
long unsigned int fact (int );

int main()    
{    
 long int number;
 float sum1=0;
      
 printf("Enter a number: ");    
  scanf("%ld",&number); 
  printf(" Factorial is %d\n",fact(number)); 
 printf("Enter a number: ");    
  scanf("%ld",&number); 
  for(int i=1;i<=number;i++)
  {
      sum1=sum1+pow(i,i)/fact(i);
  }  
  printf("Sum is %f",sum1);    
return 0;  
}

long unsigned int fact (int p)
{
    if(p==1 && p>=0)return 1;
    return(p*fact(p-1));
}