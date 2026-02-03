#include<stdio.h>
void multi_table(int);
void main()
{
  int n;
  printf("Enter a numta you want:");
  scanf("%d",&n);
  multi_table(n);
}
void multi_table(int n)
{
  for(int i=1;i<=10;i++){
    int mul=n*i;
    printf("\t \n %d  X  %d  = %d",n,i,mul);
  }
}