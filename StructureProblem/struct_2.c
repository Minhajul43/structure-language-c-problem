#include<stdio.h>
//#include<string.h>
struct stduent{
  int Roll;
  char Name[50];
  float Mark;
};
int main()
{
  struct stduent stduents[3]={
    {43,"Minhajul",83.5},
    {27,"Tahmeed",80.0},
    {21,"Juel",85.5}
  };
  for(int i=0;i<3;i++){
           printf("The student details is[%d]\n\n",i);
  printf("Roll:%d\n Name:%s\n Mark:.%2f\n\n",stduents[i].Roll,stduents[i].Name,stduents[i].Mark);}
  
  // printf("Roll:%d\n Name:%s\n Mark:.%2f\n  \t\n",stduents[1].Roll,stduents[1].Name,stduents[1].Mark);
  // printf("Roll:%d\n Name:%s\n Mark:.%2f\n  \t\n",stduents[2].Roll,stduents[2].Name,stduents[2].Mark);
  return 0;
}