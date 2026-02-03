#include<stdio.h>
int main()
{
  int array[10];
  int X=15,count=0;
  for(int i=0;i<10;i++){
    scanf("%d",&array[i]);
  }
  for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
      for(int k=j+1;k<10;k++){
        if(array[i]+array[j]+array[k]==X){
          count++;
           printf("%d %d %d\n",array[i],array[j],array[k]);
        }
      }
    }
  }
  printf("\nThe total number is :%d",count);
  return 0;
}