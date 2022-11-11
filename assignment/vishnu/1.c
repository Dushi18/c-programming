#include <stdio.h>
#include <ctype.h>
int main()
{
    int t, max, min;
    char ans;
    printf("This programe Designed by Group \"O\" \nDushyant Kumar\nSuneha Chandni\nHrashabh Gauatam\nRitu Kumar\nVishnu Yadav\n");
    printf("This programe is  design to find the largest and smallest number in given Array \nHow many number you want to enter  ");
    scanf(" %d", &t);
    printf("Enter numbers  ");
    int a[t];
    for (int i = 0; i < t; i++)
    {
        scanf(" %d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < t; i++)
    {
        max = (max > a[i]) ? max : a[i];
        min = (min < a[i]) ? min : a[i];
    }
    printf("Maximum = %d \nMinimum = %d \n", max, min);

    for (int i = 0; i < t; i++)
    {
        if (max == a[i])
        {
            a[i] = min;
        }
        else if (min == a[i])
        {
            a[i] = max;
        }
    }
    printf("\nArray after swaping maximum element with minimum element.\n");
    for (int i = 0; i < t; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("\nN_I_C_E__TO_M_E_E_T___Y_O_U");
    return 0;
}
