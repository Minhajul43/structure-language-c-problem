#include<stdio.h>
void fact(int);
void main(){
  int n;
  printf("Enter how many number you sum:");
  scanf("%d",&n);
  fact(n);
}
void fact(int n){
  int fact =1,sum=0;
  for(int i=1;i<=n;i++){
    fact *=i;
    sum +=fact/i;                                    
  }
  printf("The exponential sum is :%d",sum);
}