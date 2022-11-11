#include <stdio.h>

int main()
{
    int a=1800;
    printf("This programme is designed by group 'O' ");
    printf("\nDushyant Kumar ");
    printf("\nHrashabh Gautam");
    printf("\nSuneha Chandni Sharma");
    printf("\nVishnu Yadav");
    printf("\nRitu Kumari");
    printf("\nThis programme is designed to display all the leap years from 1800 to 2000");
    
    do
    {
        printf("\n%d",a);
        a=a+4;
    } while (a<=2000);

    
    
    return 0;
}
