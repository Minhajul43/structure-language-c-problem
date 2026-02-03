#include<stdio.h>
int main()
{
  long int n;
  int d=0;
  XY:
  printf("\n Enter a positive number:");
  scanf("%ld",&n);
  if(n<=0)
  goto XY;
printf("\n Divisors of %ld is :",   n);
int i=1;
while(i<=n)
{
  if(n% i==0)
  {
    printf("%4d", i);
    d++;
  }
  i++;
}
if(d>=3)
{
  printf("\n So,%ld is not a prime number!",n);
}
else
{
  printf("\n So,%ld is a prime number!",n);
}
  return 0;
}