#include<stdio.h>
int main()
{
  int num1,num2;
  printf("Enter two number:");
  scanf("%d %d",&num1,&num2);
  printf("The sum is :%d",sum(num1,num2));
}
int sum(int a,int b)
{
return a+b;
}