#include<stdio.h>
int main()
{ int i,j;
  int n;
   printf("Enter n:");
   scanf("%d",&n);
   int m;
   printf("Enter m:");
   scanf("%d",&m);

  int a[n][m];
  printf("Enter a matrix:\n");
for(i=0;i<n;i++){
  for( j=0;j<m;j++){
  scanf("%d",&a[i][j]);
  }
}
int b[n][m];
 printf("Enter b matrix:\n");
for( i=0;i<n;i++){
  for( j=0;j<m;j++){
    scanf("%d",&b[i][j]);
  }
}
int result[i][j];
for(i=0;i<n;i++){
  for(j=0;j<m;j++){
   result[i][j]=a[i][j]+b[i][j];
  }
}
printf("The sum of a & b matrix is:\n");
for( i=0;i<n;i++){
  for( j=0;j<m;j++){
    printf("  %d",result[i][j]);
    
  }
  printf("\n");
}
  return 0;
}