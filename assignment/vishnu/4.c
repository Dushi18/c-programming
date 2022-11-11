#include <stdio.h>
#include <math.h>
int main()
{
  printf("This programe Designed by Group \"O\" \nDushyant Kumar\nSuneha Chandni\nHrashabh Gauatam\nRitu Kumar\nVishnu Yadav\n");
  int p, q, r, s;
  printf("Enter the index first matrix (M x N)  ");
  scanf(" %d %d", &p, &q);
  float a[p][q];
  printf("Enter elements of matrix  \n");
  for (int i = 0; i < p; i++)
  {
    for (int j = 0; j < q; j++)
    {
      scanf(" %f", &a[i][j]);
    }
  }
  printf("Enter the index second matrix (M x N)  ");
  scanf(" %d %d", &r, &s);
  float b[r][s], sum = 0;
  printf("Enter elements of matrix  \n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < s; j++)
    {
      scanf(" %f", &b[i][j]);
    }
  }
  float c[q][r];
  if (p = s)
  {

    int k;
    for (int i = 0; i < q; i++)
    {
      k = 0;
      while (k < r)
      {
        for (int j = 0; j < r; j++)
        {
          sum = sum + a[i][j] * b[j][k];
        }
        c[i][k] = sum;
        k++;
        sum=0;
      }
    }

    printf("Multiplication of matries are  \n");
    for (int i = 0; i < q; i++)
    {
      for (int j = 0; j < r; j++)
      {
        printf("%.1f   ", c[i][j]);
      }
      printf("\n");
    }
  }

else printf("Product is not possible of these two matrix\n");

return 0;
}

