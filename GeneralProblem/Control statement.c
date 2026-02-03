//find the maximum number
#include<stdio.h>

int main()
{
int a,b,c;

printf("Enter the number of a:");
scanf("%d",&a);
printf("Enter the number of b:");
scanf("%d",&b);
printf("Enter the number of c:");
scanf("%d",&c);

if(a>b && a>c){
    printf("A is a maximum number:%d\n",a);
}
else if(b>a && b>c){
    printf("B is a maximum number:%d\n",b);
}

else{
    printf("C is a maximum number:%d\n",c);
}
return 0;
}

