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
printf("\n The divisors of %ld is : ",n);
int i=1;
while(i<=n)
{
  if(n%i==0)
  {
    printf("%5d", i);
    d++;
  }
  i++;
}

  return 0;
}