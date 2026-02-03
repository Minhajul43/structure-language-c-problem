#include<stdio.h>
int main()
{
  int i,j;
  int m,n;
  printf("Enter first matrix order mXn:\n");
  scanf("%d %d",&m,&n);
  int A[m][n];
  printf("Enter the element of A[%d][%d] matrix:\n",m,n);
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
   }
  }
  int p,q;
  printf("Enter sceond matrix order pXq:\n");
  scanf("%d %d",&p,&q);
  int B[p][q];
  printf("Enter the element of B[%d][%d] matrix:\n",p,q);
  for(i=0;i<p;i++){
    for(j=0;j<q;j++){
      scanf("%d",&B[i][j]);
    }
  }
  int C[m][q];
  if(n != p){
    printf("! The Arrays is not multiplication!!");
  }
  else{
    for(i=0;i<m;i++){
      for(j=0;j<q;j++){
        C[i][j]=0;
        for(int k=0;k<p;k++){
          C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
      }
    }
  
printf("The A[%d][%d] matrix is:\n",m,n);
   for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("  %d",A[i][j]);
        }
        printf("\n");
   }
   printf("The B[%d][%d] matrix is:\n",p,q);

   for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        printf("  %d",B[i][j]);

    }
    printf("\n");
   }
   printf("The C[%d][%d] matrix is:\n",m,q);

   for(i=0;i<m;i++){
    for(j=0;j<q;j++){
        printf("  %d",C[i][j]);

    }
    printf("\n");
   }
}
return 0;
}