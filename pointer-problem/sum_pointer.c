#include<stdio.h>
int main()
{ 
  int a=10,b=15;
  int *p= &a;
 int *q= &b;
  int sum=*p + *q;
  printf("%d",sum);
  return 0;
}