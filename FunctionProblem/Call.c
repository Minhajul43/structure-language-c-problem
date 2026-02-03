#include<stdio.h>
sum()
{
  int a,b;
  int sum = 0;
  printf("Enter the value of a= : b=");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf("\n sum is:%d",sum);
}
int main()
{
  sum();
  sum();
  return 0;
}