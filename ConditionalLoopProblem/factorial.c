#include<stdio.h>
int main()
{
  int n;
  int fact=1;
  printf("Enter a value of n:");
  scanf("%d",&n);
  for(int i=1; i<=n;i++)
  {
    fact*=i; 
  }
  printf("%d factorial value is:%4d",n,fact);
  return 0;
}