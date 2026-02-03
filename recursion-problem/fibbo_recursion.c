#include<stdio.h>
int fibbonacci(int);
int main()
{
  int n;
  printf("Enter how number you print:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("  %d",fibbonacci(i));
  }
  return 0;
}
int fibbonacci(int n){
  if(n==0||n==1)
  return 1;
else
return fibbonacci(n-1)+fibbonacci(n-2);
}