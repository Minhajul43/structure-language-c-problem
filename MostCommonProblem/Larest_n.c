#include<stdio.h>
void Larest(int);
void main(){
  int n;
  printf("How many disit you print n:");
  scanf("%d",&n);
  Larest(n);

}
void Larest(int n){
  int Larest=-1000,c;
  printf("\t \t Enter number of %d ",n);
  for(int i=0;i<n;i++){
    printf("\n Enter element %d :   ",i);
    scanf("%d",&c);
  }
  for(int i=0;i<n;i++){
  if(Larest<c){
    Larest=c;
  }
  }
  printf("The Largest number is :%d",Larest);
}
