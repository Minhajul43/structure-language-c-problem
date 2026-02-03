#include<stdio.h>
int main()
{
  int n;
  printf("Enter n:");
  scanf("%d",&n);
  int m;
  printf("Enter m:");
  scanf("%d",&m);

  int matrix[n][m];
  printf("Enter matrix element nXm:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  int sum=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     sum+=matrix[i][j];
    }
  }
  printf("The sum of Total matrix is :%d",sum);
  
  return 0;
}