#include<stdio.h>
int main()
{
  int Roll[5];
  float marks[5];
  for(int i=0;i<5;i++)
  {
    printf("\nEnter Roll[%d] & marks[%d]:",i,i);
    scanf("%d %f",&Roll[i],&marks[i]);
  }
  for(int i=0; i<5;i++)
  {
    printf("\nRoll[%d]=%d : marks[%d]=%.2f",i,Roll[i],i,marks[i]);
  }
  return 0;
}