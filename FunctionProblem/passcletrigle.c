#include<stdio.h>
long long factorial(int X)
{
  int fact =1;
  for(int i=2;i<=X;i++)
  {
    fact*=i;
  }
  return fact;
}
int combination(int n,int r)
{
  int nCr=factorial(n)/(factorial(r)*factorial(n-r));
  return nCr;
}
int main()
{
  int n;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(int i=0; i<=n; i++)
  {
    for(int j=0; j<=i ;j++)
    {
      int iCj=combination(i,j);
      printf("  %d",iCj);
    }
    printf("\n");
  }
  return 0;
}