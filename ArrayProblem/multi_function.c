void mul(int n,int m)
{
  int C[m][q];
for(i=0;i<m;i++){
      for(j=0;j<q;j++){
        C[i][j]=0;
        for(int k=0;k<p;k++){
          C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
      }
    }
}