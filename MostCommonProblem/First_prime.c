#include<stdio.h>
void First_prime(int);
void main()
{
  int n,i,j;
  printf("Enter n:");
  scanf("%d",&n);
  First_prime(n);
}
void First_prime(int n)
{
  while(n>=1)
    for(int i=2;i<=n;i++){
      for(int j=2;j<i;j++){
        if(j%i==0)
        break;
      }
      if(j==i){
        printf("%d",j);
        i++;
      }
    }
}
