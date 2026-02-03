#include<stdio.h> 
int main(){
  int n,i;
  printf("Enter n:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter arrays elements:\n");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]<arr[j]){
        arr[i]=arr[i];
      }
      else {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("The Revarse arrays is:"); 
  for(int i=0;i<n;i++){
     printf("  %d",arr[i]);
  }
  

  return 0;
}