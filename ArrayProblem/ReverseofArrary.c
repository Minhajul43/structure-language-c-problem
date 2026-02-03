#include<stdio.h>
int main()
{
  int arr[7]={12,34,43,54,54,65,56};
  int brr[7];
  for(int i=0;i<7;i++){
    brr[i]=arr[6-i];
  }
  for(int i=0;i<7;i++){
    arr[i]=brr[i];
  }
  for(int i=0;i<7;i++){
    printf("  %d",arr[i]);
  }
  return 0;
}