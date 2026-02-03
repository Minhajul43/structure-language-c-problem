#include<stdio.h>
// void Reverse(int);
int  main()
{
  int n ;
  printf("Enter n:");
  scanf("%d",&n);
  int i,array[n];
  printf("Enter the element of %d:\n ",n);
  for( i=0;i<=n;i++){
    scanf("%d",&array[i]);
  }
  printf("The reverse is :");
  for( i=n;i>=0;i--){
    printf(" %d",array[i]);
  }
  return 0;
}