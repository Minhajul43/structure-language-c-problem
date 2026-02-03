#include<stdio.h>
int main()
{
  int i,j,n,m,p,q;
  printf("Enter mXn matrix:");
  scanf("%d %d",&m,&n);
  int A[m][n];
  printf("Enter elemen A[%d][%d]:\n",m,n);
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }
   printf("Enter pXq matrix:");
  scanf("%d %d",&p,&q);
  int B[p][q];
  printf("Enter elemen A[%d][%d]:\n",p,q);
  for(i=0;i<p;i++){
    for(j=0;j<q;j++){
      scanf("%d",&B[i][j]);
    }
  }
  int C[m][q];
  for(i=0;i<m;i++){
    for(j=0;j<q;j++){
     C[i][j]=0;
     for(int k=0;k<n;k++){
      C[i][j]=C[i][j]+A[i][k]*B[k][j];
     }
    }
  }
  printf("The multiplication of matrix is \n");
  for(i=0;i<m;i++){
    for(j=0;j<q;j++){
      printf(" %d",C[i][j]);
    }
    printf("\n");
  }
  return 0;
}