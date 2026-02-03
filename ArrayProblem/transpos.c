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
  // int temp;
  // for(int i=0;i<r;i++){
  //   for(int j=0;j<c;j++){
  //   i=temp;
  //   i=j;
  //   j=temp;
  //   }
  // }
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      printf("  %d",matrix[j][i]);
    }
    printf("\n");
  }
  return 0;
}