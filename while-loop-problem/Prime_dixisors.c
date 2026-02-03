#include<stdio.h>
int main()
{
  long int n;
  printf("Enter a positive number:");
  scanf("%ld",&n);
  printf("\n Here %ld ar prime divisors series is:",n);

  int i=2;
  while(i<=n)
  {
    while(n%i==0)
    {
      printf("%4d",i);
      n/=i;
    }
    i++;
  }
  return 0;
}