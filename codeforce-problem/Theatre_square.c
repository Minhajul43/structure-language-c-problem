#include<stdio.h>
int main()
{
  long long int n,m,a;
  scanf("%lld %lld %lld",&n,&m,&a);
  long long A=((n+a-1)/a)*((m+a-1)/a);
  printf("%lld",A);
  return 0;
}