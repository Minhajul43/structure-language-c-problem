#include<stdio.h>
int sumofDisits(int);
int main()
{
  int n;
  printf("Enter a number :");
  scanf("%d",&n);
  printf("The sum of disits is :%d",sumofDisits(n));
}
int sumofDisits(int n){
  if(n==0)
  return 0;
else
return n%10+sumofDisits(n/10);
}