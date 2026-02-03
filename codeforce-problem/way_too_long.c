#include<stdio.h>
#include<string.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    char w[100];
    scanf("%s",w);
    int c=strlen(w);
    if(c<11){
      printf("%s\n",w);
    }
  else{
    printf("%c%d%c\n",w[0],c-2,w[c-1]);
    }
  }
  return 0;
 }
  


