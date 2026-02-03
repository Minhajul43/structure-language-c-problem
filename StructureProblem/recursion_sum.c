#include<stdio.h>
int sum(int);
int main()
{
  int n;
  printf("Enter  n:");
  scanf("%d",&n);
  printf("The recursion sum is :%d",sum(n));
  return 0;
}
int sum(int n){
  if(n==0)
  return 0;
else
return n+sum(n-1) ;
}