#include<stdio.h>
int main(){
  char n;
  printf("Enter a smoll Alphabat:");
  scanf("%c",&n);
  if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'){
    printf("Vowel ?");
  }
else {printf("Consonand ?");}
 return 0;
}