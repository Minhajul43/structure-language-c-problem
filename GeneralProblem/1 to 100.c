#include<stdio.h>
#include<conio.h>
main()
{
int a,s;
s=0;
for(a=1;a<=100;a+=2)
{
    s=s+a;
}
printf("sum=%d",s);

return 0;
}
