#include<stdio.h>
int main()
{
  int n;
  XX:
  printf("Enter a positive number:");
  scanf("%d",&n);
  if(n<1)
  goto XX;
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=i;j++)
  {
    printf("  @",i);
  }
  printf("\n\n");
  
}

  return 0;
}