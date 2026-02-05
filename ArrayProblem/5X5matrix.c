#include<stdio.h>
int main(){
  int max[3][3];
  printf("Enter the array data:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&max[i][j]);
    }
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("  %d",max[i][j]);
    }
    printf("\n");
  }
  return 0;
}