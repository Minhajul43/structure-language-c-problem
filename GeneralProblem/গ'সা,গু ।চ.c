#include<stdio.h>

int main()
{
int n1,n2,m;

printf("Enter two non_negative number:");
scanf("%d %d",&n1,&n2);

printf("\nGreatest Common Factor of %d and %d is:",n1,n2);

while(n2 !=0)
{
    m=n1n2;
   n1=n2;
   n2=m;
}
printf("%d",n1);


return 0;
}
