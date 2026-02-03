#include<stdio.h>
int main()
{
  int n;
  int sum =0;
  printf("Enter n:");
  scanf("%d",&n);
  int Arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&Arr[i]);
  }
  
  for(int i=0;i<n;i++){
    sum = sum +Arr[i];
  }
  printf("\nThe sum of Array is :%d",sum);
  return 0;
}