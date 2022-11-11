#include <stdio.h>
#include <ctype.h>
int main()
{
  int t, tag = 1;
  char ans;
  printf("This programe Designed by Group \"O\" \nDushyant Kumar\nSuneha Chandni\nHrashabh Gauatam\nRitu Kumar\nVishnu Yadav\n");
  printf("This programe is  design to check duplicates in Arrray\nEnter the length of Array  ");
  scanf(" %d", &t);
  int a[t];
  printf("Enter numbers  ");
  for (int i = 0; i < t; i++)
  {
    scanf(" %d", &a[i]);
  }
  for (int i = 0; i < t; i++)
  {

    for (int j = i + 1; j < t; j++)
    {
      if (a[i] == a[j])
      {
        ans = 'y';
        break;
      }
    }
    if (ans == 'y')
    {
      printf("\nYes this array have duplicates elements");
      break;
    }
    else
    {
      printf("\nThis array have not any duplicate element");
      break;
    }

    printf("\nN_I_C_E__TO_M_E_E_T___Y_O_U");
    return 0;
  }
}