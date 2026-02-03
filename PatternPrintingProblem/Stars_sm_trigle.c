#include<stdio.h>
int main()// fault ache ai coding 
{
  int n;
  printf("Enter a positive number:");
  scanf("%d",&n);

  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=n; j++)
    {
      if(j=2i-1)printf("*");
      else printf(" ");
    }
    printf("\n");
    
  }
  return 0;
}