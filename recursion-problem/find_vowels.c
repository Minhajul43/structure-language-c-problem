#include<stdio.h>
int main()
{
char s[50]="i want to be a computer programmer!'";
int count=0;
for(int i=0;i<=50;i++){
  if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
    count++;
  }
}
printf("The number of vowels is:\n%d",count);
return 0;
}