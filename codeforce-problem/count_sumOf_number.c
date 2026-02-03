//find the sum and count digit of a given number
#include<stdio.h>
int main()
{
  int n,sum=0,count=0;
  printf("Enter a number :");
  scanf("%d",&n);
  while(n>1){
    int remainder=n%10;
    sum +=remainder;
    n=n/10;
    count++;
  }
  printf("The sum of the digits is:%d\n",sum);
  printf("The number of digits is:%d",count);

  return 0;
}