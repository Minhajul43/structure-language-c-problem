#include<stdio.h>
int main(){
  int n;
  printf("Enter of array size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter of array elements:");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("The sort of array in accending:");
  for(int i=0;i<n;i++){
    printf("  %d",arr[i]);
  }
  // printf("\n The sort of array in decending:");
  // for(int i=n;i>0;i--){
  //   printf("  %d",arr[i]);
  // }
  return 0;
}