#include <stdio.h>

int main()
{
    char ch=65,a,e,i,o,u;
    int alpha=0,beeta=0,gama=0,delta=0,theeta=0,capsa=0,capse=0,capsi=0,capso=0,capsu=0;;
     printf("This programme is designed by group 'O' ");
    printf("\nDushyant Kumar ");
    printf("\nHrashabh Gautam");
    printf("\nSuneha Chandni Sharma");
    printf("\nVishnu Yadav");
    printf("\nRitu Kumari");
    printf("\nThis programme is designed to print alphabets until a consonant is encountered and display their counts.\n");
    printf("\nenter alphabets\n");
    do
    {
   scanf(" %ch\n",&ch);
   
    if (ch==97)
    {
        alpha=alpha+1;

    }
     else if (ch==101)
    {
        beeta=beeta+1;
    }
    else  if (ch==105)
    {
        gama=gama+1;

    }
    else if (ch==111)
    {
        delta=delta+1;
    }
    else if (ch==117)
    {
        theeta=theeta+1;
    }
    else if (ch==65)
    {
        capsa=capsa+1;
    }
    else if (ch==69)
    {
        capse=capse+1;
    }
    else if (ch==73)
    {
        capsi=capsi+1;
    }
    else if (ch==79)
    {
        capso=capso+1;
    }
    else if (ch==85)
        capsu=capsu+1;   
    else
    {
        break;
    }
        
    } while (ch<=122);
    printf("\nNo. of vowel a=%d",alpha);
    printf("\nNo. of vowel e=%d",beeta);
    printf("\nNo. of vowel i=%d",gama);
    printf("\nNo. of vowel o=%d",delta);
    printf("\nNo. of vowel u=%d",theeta);
    printf("\nNo. of vowel A=%d",capsa);
    printf("\nNo. of vowel E=%d",capse);
    printf("\nNo. of vowel I=%d",capsi);
    printf("\nNo. of vowel O=%d",capso);
    printf("\nNo. of vowel U=%d",capsu);
    return 0;
}
