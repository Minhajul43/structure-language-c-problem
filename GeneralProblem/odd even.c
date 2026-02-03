#include<stdio.h>
#include<conio.h>
int main()
{
int a;

printf("Enter the values of a:");
scanf("%d",&a);
if(a%2==0)
{
    printf("The number is even=\n",a);
}
else
{
    printf("The number is odd=\n",a);
}

printf("  ");
return 0;
}
