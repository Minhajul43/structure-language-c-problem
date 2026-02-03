#include<stdio.h>
void fun(int arr[])
{
arr[0]=100;
}
int main()
{
int arr[5]={12,23,34,43,45};
printf("\n%d",arr[0]);
fun(arr);
printf("\n%d",arr[0]);
return 0;

}