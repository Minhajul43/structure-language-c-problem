#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);

  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nNew value of a is :%d",a);
  printf("\nNew value of b is:%d",b);
  return 0;
}