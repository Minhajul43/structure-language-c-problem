#include<stdio.h>
int main()
{
  int n;
  printf("Enter n:");
  scanf("%d",&n);
  int input[n];
  for(int i=0 ;i<n ;i++){
    scanf("%d",&input[i]);
  }
  int max =-1;
  for(int i=0;i<n;i++){
    if(max<input[i]){
      max=input[i];
    }
  }
  printf("\n The maximum value is:%d",max);
  return 0;
}