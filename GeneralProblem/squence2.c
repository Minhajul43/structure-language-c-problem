
#include<stdio.h>
#include<conio.h>
main()
{
int a,n,sum;
sum=0;
printf("Enter number of n:");
scanf("%d",&n);
for(a=1;a<=n;a+=2)
sum=sum+a;
printf("\n sum=%d",sum);
return 0;
}
