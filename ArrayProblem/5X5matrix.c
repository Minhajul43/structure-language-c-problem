#include<stdio.h>
int main()
{
  int max[5][5];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      scanf("%d",&max[i][j]);
    }
  }

  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("  %d",max[i][j]);
    }
    printf("\n");
  }
  return 0;
}