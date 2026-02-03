#include<stdio.h> 
int Odd_even(int);
void main()
{
  int n;
  printf("Enter a intreger number:");
  scanf("%d",&n);
  int Minhajul=0;
  Minhajul=Odd_even(n);
  if(Minhajul==1){
    printf("\n %d is a Odd number !");
  }
  else printf("\n %d is a even number !");

}
int Odd_even(int n){
  if(n%2==0){
    return 1;
  }
  else{
    return 0;
  }
}