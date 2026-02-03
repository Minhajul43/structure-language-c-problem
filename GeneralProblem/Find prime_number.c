#include<stdio.h>


int main()
{
long int n;
int i=1,d=0;

XY:

printf("Enter a positive number:");
scanf("%ld",n);

if(n<=0)
goto XY;

printf("\n Divisors of %ld are:",n);

while(i<=n)
{
    if(n%i==0)
    {
        printf("%3d",i);
        d++;
    }
    i++;
}
if(d>=3)
printf("\nSo, %ld is not a prime number",n);

else
printf("\nSo,%ld is a prime number",n);




return 0;
}
