#include<stdio.h>
#include<string.h>
void reverse_string(char str[]);
int  main(){
  char str[1000];
  printf("Enter a str:");
  scanf("%s",str);
  printf("\n Here is a string......\n %s",str);
  reverse_string(str);
  printf("\n Reverse string is ...\n :%s",str);
  return 0;
}

void reverse_string(char str[]){
  int n= strlen(str);
  for(int i=0;i<n/2;i++){
    char ch=str[i];
    str[i]=str[n-i-1];
    str[n-i-1]=ch;
  }
}