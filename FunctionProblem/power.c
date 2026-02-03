#include<stdio.h>
#include<math.h>
int main()
{
  float X,n;
  float result;
  printf("To calculate 'X' to the power 'n' \n");
  printf("\n first enter the value of 'X':");
  scanf("%f",&X);
  printf("\nThen enter the value of 'n':");
  scanf("%f",&n);
 
 result=pow(X,n);
 printf("\n %f to the power %f is =%f",X,n,result);

  return 0;
}