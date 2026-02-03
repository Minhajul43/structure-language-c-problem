#include<stdio.h>
int main()
{
  int i,j,n,m;
  printf("Enter row of matrix n:");
  scanf("%d",&n);
  printf("Enter coloum of matrix :");
  scanf("%d",&m);
  int A[n][m];
  printf("Enter a element of A:\n");
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     scanf("%d",&A[i][j]);
    }
  }
  int B[n][m];
  printf("Enter a element of B:\n");
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&B[i][j]);
    }
  }
  int C[n][m];
  printf("The sum of matrix is :\n");
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      C[i][j]=A[i][j]+B[i][j];
    }
  }
  printf("The C matrix is :\n");
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("  %d",C[i][j]);
    }
    printf("\n");
  }
  return 0;


}