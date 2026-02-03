#include<stdio.h>
#include<math.h>
#define PI 3.1216
int main()
{
  double result,X;
  printf("\n Enter a value of x:");
  scanf("%lf",&X);
  result=sin(X*PI/180);
  printf(" The value of sin(%lf ) is =%lf",X,result);
  return 0;
}