#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,sum,sub,mul;
float div;

printf("Enter the two number:\n");
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("\n sum=%d",sum);
printf("\n sub=%d",sub);
printf("\n mul=%d",mul);
printf("\n div=%lf",div);
return 0;
}
