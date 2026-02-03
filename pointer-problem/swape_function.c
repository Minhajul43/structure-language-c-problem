#include<stdio.h>
// int  swape(int x,int y);
int swape(int x,int y){
  int temp=x;
  x=y;
  y=temp;
  // x=x+y;
  // y=x-y;
  // x=x-y;
  return x,y;
}
int main(){
  int m=10,n=15;
  swape(m,n);
  printf("m=%d\n",m);
  printf("n=%d\n",n);
  
  return 0;
}
