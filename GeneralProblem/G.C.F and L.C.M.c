/*
Calculating G.C.F and L.C.M of two number
*/
#include<stdio.h>

int main()
{
int a,b,gcf,lcf;
XY:

printf("\n Please enter a positive number:");
scanf("%d %d",&a,&b);
if(a<=0 && b<=0)
    goto XY;

while(a!=b)
{


    if(a>b)
    a-=b;
else
    b-=a;
}
gcf=a;
printf("\n gcf of %d and %d is:%d",a,b,gcf);

lcf=(a*b)/gcf;

printf("\n lcf of %d and %d is:%d",a,b,lcf);
return 0;
}
