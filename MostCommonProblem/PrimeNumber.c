#include<stdio.h>
int main()
{
  long int n;
  int d=0;
  printf("Enter a n number:");
  scanf("%ld",&n);
  printf("The divisors of %ld is:",n);
  for(int i=1;i<=n;i++){
    if(n%i==0){
      printf("%4d",  i);
      d++;
    }
  }
  if(d>2){
    printf("\n %ld is not a Prime number!");
  }
  else{
     printf("\n %ld is a Prime number!",n);
  }
   
   return 0;
}