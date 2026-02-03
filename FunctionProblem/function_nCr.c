#include<stdio.h>
long long factorial(int X)
{
  int fact =1;
  for(int i=2; i<=X;i++)
  {
    fact*=i;
  }
  return fact;

}

int main()
{
  int n,r;
  printf("Enter the value of n:");
  scanf("%d",&n);
  printf("Enter the value of r:");
  scanf("%d",&r);
  int nfact=factorial(n);
  int rfact=factorial(r);
  int nrfact=factorial(n-r);

  int nCr=nfact/(rfact*nrfact);
  printf("%dC%d total factorial  result is:%d",n,r,nCr);
  return 0;
}
