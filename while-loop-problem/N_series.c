#include<stdio.h>
int main()
{
  int n;
  printf("\n Enter a positive number:");
  scanf("%d",&n);
  printf("Here the series is:\n");
   int i=1;
  while(i<=n)
  {
    printf("%4d",  i);
    i=i+1;
  }
  return 0;
}