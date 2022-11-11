#include <stdio.h>
#include <math.h>
int main()
{
printf("This program is designed by group \"O\"\n");
printf("This programe is design to calculate salary of an employee\n");
float salary, bonus;
char gender, name[20];
printf("Enter your name\t");
scanf(" %[^\n]", name);
printf("Enter 'M' for Male\nEnter 'F' for Female\t");
scanf(" %c", &gender);
printf("Enter your salary (in INDIAN currency):- \t");
scanf(" %f", &salary); switch (gender)
{
case 'm':
case 'M':
if (salary >= 10000)
{
bonus = 0.05 * salary;
printf(" %s\tYour bonus is %0.2f\t", name, bonus);
}
else
{ bonus = (0.05 + 0.02) * salary;printf(" %s\tYour bonus is %0.2f\t", name, bonus);
}
break;
case 'f':
case 'F':
if (salary >= 10000)
{
bonus = (0.1) * salary;
printf(" %s\tYour bonus is %0.2f\t", name, bonus);
}
else
{
bonus = (0.02 + 0.1) * salary;
printf(" %s\tYour bonus is %0.2f\t", name, bonus);
}
break; default:
printf(" %s\tYour bonus is %0.2f\t", name, bonus);
}
return 0;
}