#include<stdio.h>
//গুণনিয়াক নিরনয

int main()
{
long int n;
int i=1,d=0;
XY:

printf("\n Enter a positive number:");
scanf("%ld",&n);
if(n<=0)
    goto XY;

printf("\n Divisors of %ld are :",n);

while (i<=n)
{
    if(n%i==0)
    {
        printf("%5d",i);
        d++;
    }
    i++;
}


return 0;
}
