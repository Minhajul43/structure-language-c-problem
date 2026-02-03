#include<stdio.h>

int main()
{
int a,b,c,d;
float Ratio;

printf("\n Enter the of a:");
scanf("%d",&a);
printf("\n Enter the of b:");
scanf("%d",&b);
printf("\n Enter the of c:");
scanf("%d",&c);
printf("\n Enter the of d:");
scanf("%d",&d);

if(c-d !=0)
{
    Ratio =(float)(a+b)/(float)(c-d);
    printf("\n Ratio=%f",Ratio);
}



return 0;
}
