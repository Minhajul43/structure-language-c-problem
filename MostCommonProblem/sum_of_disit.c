#include<stdio.h>
int main(){
  int n,rememder;
  printf("Enter a number:");
  scanf("%d",&n);
  int sum=0;
  while(n!=0){
    rememder=n%10;
    sum +=rememder;
    n=n/10;
  }
  printf("The sum of disits is:%d",sum);
  return 0;
}