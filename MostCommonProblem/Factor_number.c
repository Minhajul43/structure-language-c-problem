#include<stdio.h>
void Factor(int);
void main(){
  int n;
  printf("Enter a n:");
  scanf("%d",&n);
  Factor(n);
}
void Factor(int n)
{ 
  printf("The factor of a number is:");
  for(int i=1;i<=n;i++){
  if(n%i==0){
    printf("  %d",i);
}
  }
  }
  