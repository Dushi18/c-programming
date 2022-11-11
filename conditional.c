#include <stdio.h>

int main()
{
    int a;
      printf("type 1 if uh passed in maths and type 2 if uh passed in science \n and type 3 if uh passed in both.");
      scanf("\n %d",&a);
      
      if (a==1)
      {
        printf("\n congratulations! you have passed in maths you gotta prize of 15.");
      }
      else if (a==2)
      {
        printf("\n congratulations! you have passed in science you gotta prize of 15.");
      }
      else if (a==3)
      {
        printf("\n congratulations! you have passed in maths you gotta prize of 15.");
      }
      else
      {
        printf("\n chutiya ho kya bhsdk theek se pdhna bhi nhi aata.");
      }

    return 0;
}
