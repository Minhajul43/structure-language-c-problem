//Example of Arithmetic operation
#include<stdio.h>

int main()
{
int a=10,b=15,c=20,result;
result =c/a;
printf("\nDivision:\t %d/%d=%d",c,a,result);
result =b%a;
printf("\nModulo:\t %d %% %d=%d",b,a,result);
result =a*b+c;
printf("\nExpression:\t %d * %d + %d=%d",a,b,c,result);

return 0;
}
