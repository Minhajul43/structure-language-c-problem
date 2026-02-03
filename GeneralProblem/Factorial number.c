#include<stdio.h>
// factorial number
int main()
{
int fact,n,sum;
printf("\n enter a number of n:");
scanf("%d",&n);

 for(int i=1; i<=n; i++)
 {
     fact =fact*i;

     printf("The number of %d factorial is:%d",fact);
 }

return 0;
}
