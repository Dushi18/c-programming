#include <stdio.h>
#include <ctype.h>
int items(void);
int sp(void);
void si(int i, int *i1, int *i2, int *i3, int *sum);
int main()
{
  int i, sum;
  char ans = 'y';
  int i1 = 0, i2 = 0, i3 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
  printf("This programe Designed by Group \"O\" \nDushyant Kumar\nSuneha Chandni\nHrashabh Gauatam\nRitu Kumar\nVishnu Yadav\n");
  while (ans == 'y' || ans == 'Y')
  {
    switch (sp())
    {
    case 1:
      i = items();
      si(i, &i1, &i2, &i3, &sum);
      p1 = sum + p1;
      break;
    case 2:
      i = items();
      si(i, &i1, &i2, &i3, &sum);
      p2 = sum + p2;
      break;
    case 3:
      i = items();
      si(i, &i1, &i2, &i3, &sum);
      p3 = sum + p3;
      break;
    case 4:
      i = items();
      si(i, &i1, &i2, &i3, &sum);
      p4 = sum + p4;
      break;
    case 5:
      i = items();
      si(i, &i1, &i2, &i3, &sum);
      p5 = sum + p5;
      break;
    }
    printf("\nDo you want to sell more items  ");
    scanf(" %c", &ans);
    printf("\n");
  }
  printf("Total sell by person 1 is  %d\n", p1);
  printf("Total sell by person 2 is  %d\n", p2);
  printf("Total sell by person 3 is  %d\n", p3);
  printf("Total sell by person 4 is  %d\n", p4);
  printf("Total sell by person 5 is  %d\n", p5);
  printf("Total sell of item \"A\" is  %d\n", i1);
  printf("Total sell of item \"B\" is  %d\n", i2);
  printf("Total sell of item \"C\" is  %d\n", i3);

  return 0;
}

int items(void)
{
  int n;
  printf("Select item for sale\n");
  printf("1 For item A\n");
  printf("2 For item B\n");
  printf("3 For item C\n");
  scanf(" %d", &n);
  return n;
}
int sp(void)
{
  int l;
  printf("Select person to sell items \n");
  printf("1 For person 01\n");
  printf("2 For person 02\n");
  printf("3 For person 03\n");
  printf("4 For person 04\n");
  printf("5 For person 05\n");
  printf("0 For no one\n");
  scanf(" %d", &l);
  return l;
}
void si(int i, int *i1, int *i2, int *i3, int *sum)
{
  if (i == 1)
  {
    int temp;
    printf("How many units of \"A\" want to sell  ");
    scanf(" %d", &temp);
    *i1 = *i1 + temp;
    *sum=temp;
  }
  else if (i == 2)
  {
    int temp;
    printf("How many units of \"B\" want to sell  ");
    scanf(" %d", &temp);
    *i2 = *i2 + temp;
    *sum=temp;
  }

  else if (i == 3)
  {
    int temp;
    printf("How many units of \"C\" want to sell  ");
    scanf(" %d", &temp);
    *i3 = *i3 + temp;
    *sum=temp;
  }

  return;
}