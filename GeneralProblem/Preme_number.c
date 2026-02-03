#include<stdio.h>
// Excelent Result
//Series of Preme Number ??
int main()
{
int i,j,N;

printf("\n Enter a highest value of N:");
scanf("%d",&N);
printf("Here is a preme number series are:\n",N);

for(i=2;i<=N;i++)
{
    for(j=2;j<=i;j++)
    {
        if(i%j==0)
            break;
    }
    if(i==j)
    {
        printf("%5d",i);
    }
}


return 0;
}
