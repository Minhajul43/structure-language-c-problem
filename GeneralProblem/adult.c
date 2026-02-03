#include<stdio.h>

int main()
{
int age;

printf("Enter the age=");
scanf("%d",&age);
if(age>=18){
    printf("Adult \n");
    printf("They can vote\n");
    printf("They can drive a car\n");
    printf("So they are called a cittigen\n");
}
else {
    printf("Not Adult");
}

return 0;
}
