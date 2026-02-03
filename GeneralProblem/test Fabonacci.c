#include<stdio.h>
//Excelent coding
//1+1+2+3+5+8.....
int main()
{
int sum=0,num1=0,num2=1;
int i,N;
printf("\n How many Fibonacci number you print:");

scanf("%d",&N);
printf("\nFirst %d Fibonacci number are:\n",N);
for(i=1;i<=N;i++)
{
    sum=num1+num2;
    printf("%4d",sum);
    num2=num1;
    num1=sum;
}


return 0;
}
