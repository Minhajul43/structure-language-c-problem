#include<stdio.h>
int sum();//function prototype 
int mul();
int x=20,y=30; //global variavle declare 
int main()
{
  printf("Inside main()....");
  printf("\n x=%d \ny=%d",x,y);
  sum();
  mul();
  return 0;
}
int sum()
{
  int sum =x+y;
  printf("\nInside main().....");
  printf("\n%d + %d =%d",x,y,sum);
  return sum;
}
int mul()
{
 int  mul =x*y;
  printf("\nInside main()....");
  printf("\n%d * %d =%d",x,y,mul);
  return mul;
}