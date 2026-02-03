#include<stdio.h>
int fibbonacci(int);
int main()
{
  int n;
  printf("Enter the number of fibonacci:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    printf("  %d",fibbonacci(i));
  }
  return 0;
}
int fibbonacci(int n){
  if(n==0||n==1)
  return n;
else
return fibbonacci(n-1)+fibbonacci(n-2);
}