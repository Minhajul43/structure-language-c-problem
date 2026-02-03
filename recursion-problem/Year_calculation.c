#include<stdio.h>
int main()
{
  int days,months,years;
  printf("Enter a days:");
  scanf("%d",&days);
  months=days/30;
  years=months/12;
  months=months%12;
  days=days%30;
  printf("years= %d \n months= %d \n days= %d",years,months,days);
  return 0;
}