#include<stdio.h>
int main(){
  int n;
  XX:
  printf("Enter positive intreger number:");
  scanf("%d",&n);
  if(n<1)
   goto XX;
  int fact=1;
  for(int i=n;i>1;i--){
    fact*=i;
  }
  printf("%d the factorial value is %d",n,fact);
  return 0;
}