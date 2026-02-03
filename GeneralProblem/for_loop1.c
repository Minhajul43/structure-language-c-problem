#include<stdio.h>
#include<conio.h>
int main()
{//code for namta

int n,i;

printf("Enter the number of n=");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
    printf("%d X %d = %d\n", n, i, n*i);
}

return 0;
}
