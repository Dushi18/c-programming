#include<stdio.h>
int main()
{
    int i,size,smallest,largest;
    int num[size];
    printf("Enter size of array.\n");
    scanf("%d",&size);
    printf("The given array is :\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&num[i]);
    }
    largest=num[0];
    for ( i = 1; i < size; i++)
    {
        if (num[0]<num[i])
        {
            largest=num[i];
        }
    }
    printf("\nlargest element of this array is : %d",largest);
     smallest=num[size-1];
     for ( i = size-2; i >=0; i--)
     {
         if (num[size-1]>num[i])
         {
             smallest=num[i];
         }
         
     }
        
    
    printf("\nsmallest element of this array is : %d",smallest);
    return 0;
}
