#include<stdio.h>
int main()
{
  int n;
  printf("Enter of array size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array elements:");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int Max=0;
  int Mini=0;
  for(int i=0;i<n;i++){
    if(Max<arr[i]){
      int temp=Max;
      Max=arr[i];
      arr[i]=temp;
    }
  }
  printf("The Maximum value is :%d\n",Max);
  return 0;
}