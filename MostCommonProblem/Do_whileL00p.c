#include<stdio.h>
int main(){
  int i=10;
  do{
    printf("i=%d\n",i);
    i-=2;
  }
  while(i>0);
  return 0;

}