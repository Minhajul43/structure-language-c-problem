#include<stdio.h>
int main()
{
  int n,r,nr;
  printf("Enter the value of n:");
  scanf("%d",&n);
  printf("Enter the value of r:");
  scanf("%d",&r);
  nr=n-r;

  int nfact =1;
  for(int i=2; i<=n;i++)
  {
    nfact*=i;
    printf("%d",nfact);
  }

  int rfact =1;
  for(int i=2; i<=r;i++)
  {
    rfact*=i;
    printf("%d",rfact);
    
  }

  int nrfact =1;
  for(int i=2; i<=nr;i++)
  {
    nrfact*=i;
    printf("%d",nrfact);
    
  }
  int ncr=nfact/(rfact*nrfact);

  printf("\n factorial valre is :%d",ncr);
  return 0;
}