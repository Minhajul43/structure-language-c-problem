#include<stdio.h>
int main()
{ 
  int a=10,b=15;
  int *p= &a;
 int *q= &b;
//  int temp=*p;
//  *p=*q;
//  *q=temp;
 printf("a= %d \n",*q);
 printf("b= %d",*p);
 return 0;
}