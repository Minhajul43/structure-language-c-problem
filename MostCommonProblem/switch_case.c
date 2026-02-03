#include<stdio.h>
int main(){
  int n;
  printf("Enter your marks:");
  scanf("%d",&n);
  switch(n/10){
    case 10:
    case 9:
    case 8:
    printf("Grade point is A+");
    break;
    case 7:
    printf("Grade point is A");
    break;
    case 6:
    printf("Grade point is A-");
    break;
    case 5:
    printf("Grade point is B");
    break;
    case 4:
    printf("Grade point is C");
    break;
    default:
    printf("You are fail in exam??");
  }
  return 0;
}