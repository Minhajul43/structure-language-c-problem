#include<stdio.h>
// Make a document to store student data in Structure Programming
struct student{
  char Name[100];
  int ID;
  long int Mobile;
};
void main()
{
  int n;
  printf("Enter a students number:");
  scanf("%d",&n);
  struct student details[n];
  // Input from user for build Structure 
  for(int i=1;i<=n;i++){
    printf("\t Enter input the student details for[%d] is:\n \n",i);

    printf("Enter student name[%d]:",i);
    scanf("%s",details[i].Name);

    printf("Enter student ID[%d]:",i);
    scanf("%d",&details[i].ID);

    printf("Enter student Mobile[%d]:",i);
    scanf("%ld",&details[i].Mobile);
    
  }

// for output control loop!!
  for(int i=1;i<=n;i++){
    printf("\t The output student details for[%d] is:\n \n",i);


    printf(" \tName     :%s\n \tID       :%d\n \tMobile   :%ld \n \n",details[i].Name,details[i].ID,details[i].Mobile); 
  }
}