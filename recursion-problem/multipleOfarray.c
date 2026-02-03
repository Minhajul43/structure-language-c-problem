#include<stdio.h>
// void input(int ,int);
// void multiplication(int ,int);
void multiplication(int n,int q){
  int c[m][q];
  printf("The multiplication of array is :");
  for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
      int c[i][j]=0;
      for(int k=0;k<n;k++){
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }
    }
  }
}
