#include<stdio.h>
#include<conio.h>
int main()
{
double A,P,n,r,x;

printf("Enter the total_amount P=\n");
printf("Enter the rate of interest r=\n");
printf("Enter the year n=\n");
scanf("%lf %lf %lf",&P,&r,&n);

A=P+P*n*(r/100);
x=A/(n*12);

printf("Total_amount=%0.2lf\n",A);
printf("monthly_pay=%0.2lf\n",x);
return 0;
}
