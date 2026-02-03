#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("Enter the value of b:");
  scanf("%d",&b);
float Area=a*b;
int perimeter=2*(a+b);
printf("\n The Area is =%f\n",Area);
printf("\n The perimeter=%d\n",perimeter);
return 0;

  }