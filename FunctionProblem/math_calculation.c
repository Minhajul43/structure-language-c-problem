#include<stdio.h>
#include<math.h>
int main()
{
  int x;
  printf("Enter x:");
  scanf("%d",&x);
  float b=3.00/2.00;
  float Y =(pow(x,b)+7)/sqrt(x*x +9);
  printf("\nx=%d  then Y=%.2f",x,Y);
  return 0;
}