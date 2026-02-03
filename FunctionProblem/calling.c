#include<stdio.h>
void school()
{
  printf("Minhajul has completed his SSC in 2021\n");
  return;
}
void college()
{
  printf(" He completed his HSC in 2023 \n");
  school();
  return;
}
void university()
{
  printf("Now Minhajul study in Jogannath University in CSE department\n");
  college();
  return;
}
int main()
{
  university();
  return 0;
}