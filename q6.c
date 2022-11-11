#include<stdio.h>
int a=5;
static int b=2,c=3;
int test(void);
int main()
{
printf("%3d\n",test());
//printf("3%d 3%d 3%d\n”,a,b,c);
printf("%3d%3d%3d\n",a,b,c);
return 0;
}
int test(void)
{
int a;
a=b++;
--c;
return (a+b+c);
}