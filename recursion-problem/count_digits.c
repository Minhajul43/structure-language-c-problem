#include<stdio.h>
int main(){
  int n,sum=0,count=0;
  printf("Enter a number:");
  scanf("%d",&n);
  while(n>0){
    sum+=n%10;
    n=n/10;
    count++;
  }
  printf("The sum is:%d\n",sum);
  printf("The number of digits is:%d",count);
  
  return 0;

}