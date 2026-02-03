#include<stdio.h>
int main(){
  int arr1[]={1,2,3,4};
  int arr2[]={5,6,7,8};
  int marged[10];
  for(int i=0;i<4;i++){
    marged[i]=arr1[i];
  }
  for(int i=0;i<4;i++){
    marged[i+4]=arr2[i];
  }
  printf("The marged of array is:");
  for(int i=0;i<8;i++){
    printf("  %d",marged[i]);
  }
  return 0;
}