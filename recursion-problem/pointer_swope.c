#include<stdio.h>
void swope(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main(){
  int X=10,Y=15;
  swope(&X,&Y);
  printf("The swope of:\n X=%d\n Y=%d",X,Y);
  return 0;
}