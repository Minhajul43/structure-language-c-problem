#include<stdio.h>
int main()
{
  int a,b,remenda;
  printf("Enter two positive number :");
  scanf("%d  %d",&a, &b);
  printf("\n The Greast Common Factor of %d and %d is:",a,b);
  while(b !=0)
  {
    remenda=a%b;
    a=b;
    b=remenda;
  }
  printf("%d", a);
  return 0;
}