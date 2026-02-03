#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("Enter three number:");
scanf("%d%d%d",&a,&b,&c);

if((a>b)&&(a>c))
printf("\n largest number is=%d",a);
else if((b>a)&&(b>c))
    printf("largest number is=%d",b);
else
    printf("largest number is=%d",c);
return 0;
}
