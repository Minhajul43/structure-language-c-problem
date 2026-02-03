#include<stdio.h>
int main()
{
  long int years;
  printf("Enter a year:");
  scanf("%ld",&years);
  if(((years%4==0)&&(years%100!=0))||(years%400==0))
  {
    printf("\n %ld is a leap years!");
  }
  else
  printf("\n %ld is not a leap years!");
return 0;
  
}