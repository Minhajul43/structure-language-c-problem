#include<stdio.h>
void sum()
{
  int num1,num2;
  printf("Enter the value of num1 & num2:");
  scanf("%d %d",&num1,&num2);
  int sum = num1+num2;
  printf("The sum is :\n%d",sum);
}
void sub()
{
   int num1,num2;
  printf("Enter the value of num1 & num2:");
  scanf("%d %d",&num1,&num2);
  int sub = num1-num2;
  printf("The subtraction is :\n%d",sub);

}
void mul()
{
   int num1,num2;
  printf("Enter the value of num1 & num2:");
  scanf("%d %d",&num1,&num2);
  int mul= num1*num2;
  printf("The Multiplecation is :\n%d",mul);
}
void div()
{
 int num1,num2;
  printf("Enter the value of num1 & num2:");
  scanf("%d %d",&num1,&num2);
  int sum = num1/num2;
  printf("The dividation is :\n%.2f",div);  
}
int main()
{
  sum();
  sub();
  return 0;
}