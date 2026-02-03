#include<stdio.h>
void avg(int,int,int,int,int);
int main(){
  int a,b,c,d,e;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  avg(a,b,c,d,e);
}
void avg(int a,int b, int c,int d,int e){
  int sum=a+b+c+d+e;
  float avg=sum/5;
  printf("%.2f",avg);
  return avg;

}