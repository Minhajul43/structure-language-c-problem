#include<stdio.h>
int main()
{
// int n;
// printf("Enter n:");
// scanf("%d",&n);

// //fun(int n)
// int arr[n];
// printf("Enter the elements of arr[n]:\n");
// for(int i=0;i<n;i++){
//   scanf("%d",&arr[n]);
// }
// {
int arr[5];
printf("Enter elements of arr[]:\n");
for(int i=0;i<5;i++){
  scanf("%d",&arr[i]);
}
  for(int i=0;i<5;i++){
    for(int j=0;j<i+1;j++){
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


for(int i=0;i<5;i++){
  printf("   %d",arr[i]);
  }
  printf("\nThe maximum value is:%d",arr[0]);

return 0;
}

