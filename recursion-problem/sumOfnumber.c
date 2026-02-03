#include<stdio.h>
int main()
{
  int n, sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  int a=n;
  while(n>0){
    sum=sum + n%10;
    n =n/10;
  }
  printf("\n %d number of sum is: %d",a,sum);
  return 0;
}