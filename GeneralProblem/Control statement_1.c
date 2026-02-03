// find your age by the program
#include<stdio.h>

int main()
{
int age;

printf("Enter your age:");
scanf("%d",age);
if(age<=0){
    printf("\n%d you have not borned yet!",age);
}
 if(age>0 && age<=12){
    printf("\n%d you are a child",age);
}
 if(age>12 && age<=19){
    printf("\n%d you are teenager",age);
}
 if(age>19 && age<=40){
    printf("\n%d you are a young man",age);
}
 if (age>40){
    printf("\n%d Wish your long life",age);
}

return 0;
}

