#include<stdio.h>
int main()
{
  int sum=0;
  int a[5]={12,13,14,15,16};
  for(int i=0;i<5;i++)
  {
    sum =sum+a[i];
    
  }
  printf("\nThe sum of Arrays=%d",sum);
  return 0;
}