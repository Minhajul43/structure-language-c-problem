#include<stdio.h>
int main()
{
int a;
printf("Enter a integer number:");
scanf("%d",&a);

if(a%2==0)
{
  printf("%d is a even number!");
}
else{
  printf("%d is a Odd number!");
}
return 0;

}