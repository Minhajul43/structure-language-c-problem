#include<stdio.h>

int main()
{
int marks;
printf("Enter the marks:");
scanf("%d",&marks);
if(marks>0&&marks<33){
    printf("The result is:F \n");
}
else if(marks>=33&&marks<40){
    printf("The result is:E \n");
}
else if (marks>=40&&marks<50){
    printf("The result is:D \n");
}
else if (marks>=50&&marks<60){
   printf("The result is:C \n");
}
 else if (marks>=60&&marks<65){
   printf("The result is:B \n");
}
else if (marks>=65&&marks<70){
    printf("The result is:A- \n");
}
else if (marks>=70&&marks<80){
    printf("The result is:A \n");
}
else if (marks>=80&&marks<=100){
    printf("The result is:A+ \n");
}
  else {
    printf("The result is not valid:%d\n");
  }

return 0;
}
