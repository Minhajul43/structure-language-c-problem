#include<stdio.h>
int main()
{
  int r;
  printf("Enter rows:");
  scanf("%d",&r);
  int c;
  printf("Enter coloums:");
  scanf("%d",&c);
  
  int matrix[r][c];  //find out the 2D arrays maximum element.
  printf("Enter matrix element:\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  int max=-1;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(max<matrix[i][j]);
      max=matrix[i][j];
    }
  }
   printf("Max is:%d",max);
  return 0;
}