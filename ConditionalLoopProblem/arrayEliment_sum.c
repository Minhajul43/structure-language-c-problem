#include<stdio.h>
int main()
{
  int arr[5];
  int sum=0;
  printf("Enter the element of array:");
  for(int i=0;i<5;i++){
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<5;i++){
    sum+=arr[i];
  }
  printf("The sum of array is %d\n",sum);
  return 0;


}