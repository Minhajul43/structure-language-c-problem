#include<stdio.h>
void ponen(int,int);
void main()
{
  int n,exp;
  printf("Enter base n:");
  scanf("%d",&n);
  printf("Enter exponential:");
  scanf("%d",&exp);
  ponen(n,exp);
}


void ponen(int n,int exp){
  int pow1 =1;
  int e=exp;
  while(exp-->0){
    pow1 *=n;
  }
  printf("%d to the power %d is=  %d",n,e,pow1);
}