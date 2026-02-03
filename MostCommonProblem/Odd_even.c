#include<stdio.h>
void Odd_even(int);
void main(){
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  Odd_even(n);
}
void Odd_even(int n)
{
  if(n%2==0){
    printf("%d is a Odd number?",n);
  }
  else{
    printf("%d is a even number?",n);
  }
}