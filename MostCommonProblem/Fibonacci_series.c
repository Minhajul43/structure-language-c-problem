#include<stdio.h>
int main(){
  int n;
  int a=1;
  int b=1;
  printf("How many disit you print:");
  scanf("%d",&n);
  printf("The fabonacci series is:1");
  for(int i=0;i<=n;i++){
    int c=a+b;
    a=b;
    b=c;
    printf(" %d",a);
  }
 
  return 0;
}