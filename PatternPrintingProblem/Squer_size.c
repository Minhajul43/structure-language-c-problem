#include<stdio.h>
int main()
{
  
  int n;
  printf("Enter a number rows:");
  scanf("%d",&n);
  int m;
  printf("Enter a number of coloums:");
  scanf("%d",&m);
  for(int i=1;i<=n;i++)
  {
    for(int i=1;i<=m;i++)
    {
      printf("  \t@");
    }
     printf("\n\n");
    
  }
 

  return 0;
}