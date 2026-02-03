#include<stdio.h>
long int factorial(int);
 int main()
{
  int n,fact;
  printf("Enter a n:");
  scanf("%d",&n);
  factorial(n);
  printf("The factrial value is :%d",factorial(n));
  return 0;
}
long int factorial(int n)
{
  long int fact;
  if(n==1)
    return 1;
  
  else 
    fact=n*factorial(n-1);
    return fact;
  

}