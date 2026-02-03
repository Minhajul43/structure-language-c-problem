#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);
  int temp=a;
  a=b;
  b=temp;
  printf("\na new value is:%d",a);
  printf("\nb new value is:%d",b);
  return 0;


}