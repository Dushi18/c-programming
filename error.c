#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float h, r1, r2, area, volume, RoM, RoC; //Definig the variables Roc(rate of color) RoM(rate of milk)
    printf("This programe Designed by Group \"O\" \nDushyant Kumar\nSuneha Chandni\nHrashabh Gauatam\nRitu Kumar\nVishnu Yadav\n");
    printf("\nEnter the height(in cm) of the tank\t");
    scanf(" %f", &h); // taking value of height of drum
    printf("\nEnter the upper radius(in cm) of the tank\t");
    scanf(" %f", &r1); // taking value of radius
    printf("\nEnter the lower radius(in cm) of the tank\t");
    scanf(" %f", &r2);                                             // taking value of radius
    area = pi * (pow((h * h + r1 * r1), 0.5)) / (r1 + r2);         // calculatinf the area of drum
    volume = (1.0 / 3) * pi * h * (r1 * r1 + r2 * r2 + r1 * r2);   // calculating the volume of drum
    printf("\nArea of drum\t%0.3f meter squre\n", area / 100);     // Printing the area of drum
    printf("\nVolume of drum\t%0.3f meter cube\n", volume / 1000); // printing the volume of drum
    printf("Enter rate of milk RS/Litr =\t");
    scanf(" %f", &RoM); // taking the rate of milk
    printf("Enter rate of color RS/area =\t");
    scanf(" %f", &RoC);                                            // taking the rate of color
    printf("\nTotal amount of milk\t %0.3f", RoM * volume / 1000); //Printing total amount of  milk
    printf("\nTotal amount of color\t %0.3f", RoC * area / 100);   //Printing total amount of  color
    return 0;
}