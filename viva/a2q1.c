#include <stdio.h>
#include <ctype.h>
int main()
{
    float a, b, c, d, e;                                              //variables are defined for subject marks
    char name[20];                                                    // array define for name
    printf("\nThis programme is used to calculate the percentage\n"); //Define Aim of the programme
    printf("Enter your name\t");
scanf(" %[^\n]",&name);
printf ("Marks in English is\t");
scanf(" %f",&a);
printf ("Marks in Chemistry is\t");
scanf(" %f",&b);
printf ("Marks in physics is\t");
scanf(" %f",&c);
printf("Marks in Mathematics is\t");
scanf(" %f",&d);
printf("Marks in Hindi is\t");
scanf(" %f",&e);
if(a <=100 && b <=100 && c <=100 && d <=100 && e <=100) //Applying condition for maximum marks
printf(" %s Your percentage of marks is %0.2f",name,(a+b+c+d+e)/5);
else
// Printing error if user cross the maximum limit of marks
printf ("You have entered the invalid input/n Maximum marks obtain in each subject is 100\n"); 
return 0;
}