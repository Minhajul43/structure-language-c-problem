#include<stdio.h>
int main()
{
  int n;
  printf("Enter array size:");
  scanf("%d",&n);
  int array[n];
  printf("Enter array elements:");
  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  int Oddsum=0;
  int Evensum=0;
  for(int i=0;i<n;i++){
    if(array[i]%2==0){
    Evensum+=array[i];
  }
  else Oddsum+=array[i];
  }
  printf("The sum :\nEven:%d\n Odd:%d",Evensum,Oddsum);
  return 0;
}