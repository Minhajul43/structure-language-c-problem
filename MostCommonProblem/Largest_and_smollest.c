#include<stdio.h>
int a,b;
int main(){
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
if(a==b){
  printf("a is equal to b");
}
else if(a>b){
  printf("a is largest than b");

}
else printf(" a is smallest than b");

return 0;
}