// convert days into month & years

#include<stdio.h>

int main()
{
int days,months,years;
XY:
printf("Please enter days:");
scanf("%d",&days);
if(days<0)
    goto XY;
months =days/30;
days =days%30;

years =months/12;
months =months%12;



printf("\n years =%d \n months=%d \n days =%d ",years,months,days);
return 0;
}
