#include<stdio.h>
struct stduent
{
  char Name;
  int Roll;
  long int Mobile;
}
 main()
{
  struct stduent st_1,st_2;
 // st_1.Name="Minhajul";
  st_1.Roll=43;
  st_1.Mobile=01825.;
 // printf("Name=%s \n",st_1.Name);
  printf("Roll=%d \n",st_1.Roll);
  printf("Mobile=%ld \n",st_1.Mobile);
  return ;

}