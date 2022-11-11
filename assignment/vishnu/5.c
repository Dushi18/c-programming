#include <math.h>
#include <stdio.h>
int main()
{
    float a, b, c, d;
    int t;
    char p;
    printf("This programe Designed by Group \"O\" \nDushyant Kumar\nSuneha Chandni\nHrashabh Gauatam\nRitu Kumar\nVishnu Yadav\n");
    printf("Enter complex number 1  ");
    scanf(" %f %f %c", &a, &b, &p);
    printf("Enter complex number 2  ");
    scanf(" %f %f %c", &c, &d, &p);
    printf("1 for ADDITION\n");
    printf("2 for SUBTRACTION\n");
    scanf(" %d", &t);
    switch (t)
    {
    case 1:
        if (b + d >= 0)
            printf("Sum is given by %.1f + %.1f %c\n", a + c, b + d, p);
        else
            printf("Sum is given by %.1f %.1f %c\n", a + c, b + d, p);
        break;
    case 2:
        if (b - d >= 0)
            printf("Sub is given by %.1f + %.1f %c\n", a - c, b - d, p);
        else
            printf("Sub is given by %.1f %.1f %c\n", a - c, b - d, p);
        break;
    default:
        break;
    }

    return 0;
}