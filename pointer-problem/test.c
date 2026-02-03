#include<stdio.h>
int main()
{
  int a=10,b=15,c=20;
  int *p;
   p= &a;
  printf("a= %d\n",*p);
  p= &b;
  printf("b= %d\n",*p);
  p= &c;
  printf("c= %d\n",*p);
  return 0;
}