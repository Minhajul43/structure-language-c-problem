//find the area of cercle when redius is given 
#include<stdio.h>
int main()
{
  int r;
  printf("Enter the redius of cercle:");
  scanf("%d",&r);
  double Area =3.1416*r*r;
  printf(" The Area of cercle is:%0.2lf",Area);
  return 0;
}