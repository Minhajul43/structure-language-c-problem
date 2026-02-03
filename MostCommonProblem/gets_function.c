#include<stdio.h>
int main(){
  char str[40];
  printf("Enter you name:");
  gets(str);
  printf("Welcome to %s coding journey!!",str);
  return 0;
}