#include<stdio.h>
int main(){
  int n;
  int sum=0;
  printf("Enter array size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array elements:");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
  printf("The sum of array is:%d\n",sum);
  return 0;
}