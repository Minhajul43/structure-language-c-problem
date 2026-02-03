#include<stdio.h>
int power(int,int);
int main()
{
  int base,exp;
  printf("Enter a base:");
  scanf("%d",&base);
  printf("Enter a exp:");
  scanf("%d",&exp);
  printf("The recursion power is :%d",power(base,exp));
  return 0;
}
int power(int base,int exp){
  if(exp==0)
  return 1;
else
return base*power(base,exp-1);
}