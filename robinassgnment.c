
#include <stdio.h>

void outputLeapYrResult(int result);

int main()
{
    int year, result;

    printf("Enter Year: ");
    scanf("%d",&year);
    int d;
    switch(year>=0 &&(year%4 == 0|| year%100 == 0|| year%400== 0))
    {
        case 1:
        result = 1;
        break;

        case 0:
        result =0;
        break;  
    }
  
   
outputLeapYrResult(result);
}

void outputLeapYrResult(int result)
{
 printf("\nActualOutput:");
 printf("%d", result);   
}