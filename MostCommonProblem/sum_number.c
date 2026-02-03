#include<stdio.h>
void sum_N(int);
void main(){
  int n;
  printf("Enter n:");
  scanf("%d",&n);
  sum_N(n);
}
void sum_N(int n)
{
  int i,sum=0;
  while(n>0){
    i=n%10;
    sum +=i;
    n=n/10;
  }
  printf("The sum of N number is:%d",sum);
}