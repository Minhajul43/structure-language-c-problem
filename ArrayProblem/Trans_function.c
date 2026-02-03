 #include<stdio.h>
 void transpose(int r,int c)
 {
 
 int matrix[r][c];  //find out the 2D arrays maximum element.
  printf("Enter matrix element:\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  // Here we use  loop for transpose matrix!!
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      printf("  %d",matrix[j][i]);
    }
    printf("\n");
  }
  return ;
 }
 int main(){
  void transpose();
  int n;
  printf("Enter n:");
  scanf("%d",&n);
  int m;
  printf("Enter m:");
  scanf("%d",&m);
   transpose(n, m);
  return 0;
 }