#include<stdio.h>
int main(){
  int m,n;
  printf("Enter a m=");
  scanf("%d",&m);
  printf("Enter a n=");
  scanf("%d",&n);
  int temp=m;
  m=n;
  n=temp;
  printf("m=%d \n n=%d",m,n);
  return 0;
}