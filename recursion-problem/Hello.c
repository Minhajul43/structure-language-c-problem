#include<stdio.h>
#include<string.h>
int main()
{
  char arr[]="Hello Minhajul Islam.\n Now I am study in JnU\n (Jagannath University) in CSE department! \0";
  
  for(int i=0;arr[i]!='\0';i++){
      printf("%c",arr[i]);
  }
 
  return 0;
}