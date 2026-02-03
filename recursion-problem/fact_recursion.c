#include<stdio.h>
long int  factorial(int);
int main()
{
  int n;
  printf("Enter how many number you sum:");
  scanf("%d",&n);
  factorial(n);
  printf("%d factorial value is %d\n",n,factorial(n));
  return 0;
}
long int factorial(int n){
  if(n==1)
  return 1;
else
return n*factorial(n-1);
}