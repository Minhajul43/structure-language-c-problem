#include<stdio.h>
//1 3 6 10 15 21
int main()
{
int i, N;
long s=0;

printf("\n Enter a positive number:");
scanf("%d",&N);
printf("Here is a series:");

for (i=1;i<=N;i++)
{
    s=s+i;
    printf("%ld  ",s);
}

printf("  ");
return 0;
}
