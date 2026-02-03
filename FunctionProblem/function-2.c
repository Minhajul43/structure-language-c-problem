#include<stdio.h>
double triangle(int b,int h);
int main()
{
  int  base,hight;
  printf("\n Enter the base:");
  scanf("%d",&base);
  printf("\n Enter the hight:");
  scanf("%d",&hight);
  double area= triangle(base,hight);
  printf("\n The area is :%lf",area);
}
double triangle(int b,int h)
{
  return .5*b*h;
}