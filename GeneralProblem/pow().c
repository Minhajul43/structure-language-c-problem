#include<stdio.h>
#include<math.h>

int main()
{
float n,x,result;


printf("\n To calculate 'x' to the power 'n';");
printf("\n First enter the value of 'x':");
scanf("%f",&x);

printf("\n Second enter the value of 'n':");
scanf("%f",&n);

result=pow(x,n);

printf("\n %f to the power %f is:%f",x,n,result);


return 0;
}
