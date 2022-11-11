#include<stdio.h>

int main()
{
    char ch;
    char alphabet;
    printf("This programme is designed by group 'O' ");
    printf("\nDushyant Kumar ");
    printf("\nHrashabh Gautam");
    printf("\nSuneha Chandni Sharma");
    printf("\nVishnu Yadav");
    printf("\nRitu Kumari");
    printf("\nThis programme is designed to print the given pattern\n");
    for (ch = 65; ch < 70; ch++)
    {
        for (alphabet = 65; alphabet <= ch; alphabet++)
        {
        printf("%c",alphabet);      
        }
        printf("\n");
    }
    for ( ch = 69; ch > 64; ch--)
    {
        for ( alphabet = 65; alphabet < ch; alphabet++)
        {
            printf("%c",alphabet);
        }
        printf("\n");
    }
    
    return 0;
}
