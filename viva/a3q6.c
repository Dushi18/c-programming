#include<stdio.h>
int main()
{
    int a,b,positive=0,negative=0,zero=0;
    printf("This programme is designed by group 'O' ");
    printf("\nDushyant Kumar ");
    printf("\nHrashabh Gautam");
    printf("\nSuneha Chandni Sharma");
    printf("\nVishnu Yadav");
    printf("\nRitu Kumari");
    printf("\nThis programme is designed to print counts of negative and positive integers and zeroes before -1 is encountered\n");
    printf("\nenter numbers");
    for (b = 1; b; b++)
    {
    scanf("\n%d",&a);
    if (a>0)
    {
        positive=positive+1;
    }
    else if (a<0)
    {
        negative=negative+1;
    }
    else if (a==0)
    {
        zero=zero+1;
    }
    

    if (a==-1)
    {
        break;
    }
    
    
    
    }
    printf("\ntotal number of counts is %d,\n negative counts are %d,\n positive counts are %d,\nzero counts are %d",b,negative,positive,zero);
    

    return 0;
}