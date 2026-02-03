#include<stdio.h>
void insert(int array[]);
void main()
{
  int n;
  printf("Enter how many element of array:");
  scanf("%d",&n);
  int array[n];
  
  insert(array[n]);
}
void insert(int array[]){

  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }

  for(int i=0;i<n;i++){
  printf("The input array is is:\t \n %d",array[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(array[i]<array[j]){
        array[i]=array[j];
      }
      else{
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }
  printf("The Insert array is :");
  for(int i=0;i<n;i++){
    printf("  %d",array[i]);
  }
}