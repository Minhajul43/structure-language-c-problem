#include<stdio.h>

int main()
{

long int i,N, f0=0,f1=1,f          //Wrong code


printf("\n Enter a positive number:");
scanf("%d",&N);

printf("Here is a Fibonacci series:");
for(i=0; i<=N; i++);
{
    f=f0+f1;
    printf("%5d",&f);
    f1=f0;
    f0=f;
}

return 0;
}
