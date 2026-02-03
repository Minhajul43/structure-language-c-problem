#include<stdio.h>
float power(int a,int b)
{
  float i,p=1;
  for(i=1; i<=b;i++)
  {
    p=p*a;
  }
  return p;
}
int fact(int n)
{
  int fact=1;
  if(n<=1)
 return 1;
else
{
  for(int i=1;i<=n;i++)
  fact*=i;
return fact;
}

}
int main()
{
  int n;
  float x,sum =1;
  printf("Enter x:"); //e to the power x ar expression
  scanf("%f",&x);
  
  printf("Please Enter positive number n>1: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    sum=sum+power(x,i)/fact(i);
  }
  printf("1+ x/1!+ x2/2!+ x3/3!+......+xn/n!=%.2f",sum);
  return 0;
}