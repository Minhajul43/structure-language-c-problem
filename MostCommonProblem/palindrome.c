#include<stdio.h>
int main(){
  int a,b,c,s=0;
  printf("Enter at leat three disit number:");
  scanf("%d",&a);
  c=a;
  while(a>0){
    b=a%10;
    s=(s*10)+b;
    a=a/10;
  }
  
  if(s==c){
    printf(" %d is a palindrome number !",c);
  }
  else {
    printf("\n %d is not a palindrome number !",c);}
  return 0;
  
}