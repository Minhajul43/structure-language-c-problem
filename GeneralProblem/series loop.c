//1+2+3+...+n

/*#include<stdio.h>

int main()
{
int n;
printf("Enter the Number :");
scanf("%d",&n);

int sum=0;
for(int i=1;i<=n;i++){
    sum +=i;
}


printf(" Sum is :%d\n",sum);
return 0;
}
*/


// 1+3+5+...+n
#include<stdio.h>

int main()
{
int n;
printf("Enter the Number :");
scanf("%d",&n);

int sum=0;
for(int i=1;i<=n;i+=2){
    sum +=i;
}


printf(" Sum is :%d\n",sum);
return 0;
}
