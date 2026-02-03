#include<stdio.h>
#include<math.h>
void armstrong(int n);
void main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  armstrong(n);
}
void armstrong(int n)
{
  int b,c=0,sum=0, a=n;
  
  while(a>0){
    b=a/10;
    a=b;
    c++;
  }
  // printf("C=%d",c);
  int d=n,e;
  while(d>0){
    e=d%10;
    sum +=pow(e,c);
    d=d/10;
  }
  // printf("sum=%d",sum);
  if(sum==n){
    printf("\n %d is a armstong number??",n);
  }
  else{
    printf("\n %d is not a armstrong number??",n);
    }
}