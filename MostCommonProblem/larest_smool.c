#include<stdio.h>
void larest(int);
void smollest(int);
void input(int);
void main()
{   // please correct the code first !!
  int n;
  printf("Enter size of array:");
  scanf("%d",&n);
  input(n);
}
void input(int n){
  int array[n];
  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  // printf("array[%d]={",n);
  for(int i=0;i<n;i++){
    printf("  %d",array[i]);
  }
  // printf("}");
  larest(array[i]);

}
void larest(int array[i]){
  int a[0],x;
  x=a[0];

  for(int i=0;i<n;i++){
    if(array[i]>x);
    x=array[i];
  }
  printf("the larest number is:%d",x);
}