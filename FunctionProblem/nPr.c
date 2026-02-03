#include<stdio.h>
long long factorial(int X)
{
  int fact=1;
  for(int i=2 ;i<=X; i++)
  {
    fact*=i;
  }
  return fact;
}

int main()
{
  int n,r;
  printf("Enter n:");
  scanf("%d",&n);
  printf("Enter r:");
  scanf("%d",&r);

int nfact=factorial(n);
int nrfact=factorial(n-r);
int nPr=nfact/nrfact;
printf("%dP%d Permutation value is:%d",n,r,nPr);
return 0;
}


 

















