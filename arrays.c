#include <stdio.h>

int main()
{
    int i,sum=0;
    int marks[7];
    marks[0]=89;
    marks[1]=9;
    marks[2]=9;
    marks[3]=9;
    marks[4]=9;
    marks[5]=9;
    marks[6]=9;
    for ( i = 0; i <7; i++)
    {
        printf("\n%d",marks[i]);
        sum=sum+marks[i];
    }
    printf("\n the sum of all elements of array is %d",sum);
    return 0;
}
