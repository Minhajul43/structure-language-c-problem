#include<stdio.h>
#include<conio.h>
main()
{
int x;

printf("\n Enter a year:");
scanf("%d",&x);
if((x%400==0)||(x%100)!=0&&(x%4==0))
    printf("\n %d is leap year",x);
else
    printf("\n %d is not leap year",x);

return 0;
}
