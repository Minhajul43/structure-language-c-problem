#include<stdio.h>
struct student{
  char name[100];
  int roll;
  float marks;
};
void main()
{
  int n;
  printf("Enter number of student:");
  scanf("%d",&n);
  struct student data[n];
  // input for n number of student
  for(int i=1;i<=n;i++){
    printf("\t Enter [%d] number of student:\n",i);
    printf("name:");
    scanf("%s",data[i].name);
    printf("\nroll:");
    scanf("%d",&data[i].roll);
    printf("\nmarks:");
    scanf("%f",&data[i].marks);
  }

  // control loop for output 
  printf("Here student data is :");
  for(int i=1;i<=n;i++){
    printf(" name  :%s\n roll  :%d\n marks :%f",data[i].name,data[i].roll,data[i].marks);
  }
}