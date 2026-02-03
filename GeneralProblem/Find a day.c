#include<stdio.h>

int main()
{
int day;//1=sumday, 2= monday ,3=tuesday

printf("Enter a number(1-7):");
scanf("%d",&day);
switch(day){
case 1:printf("sunday\n");
break;
case 2:printf("mondayday\n");
break;
case 3:printf("tuesdayday\n");
break;
case 4:printf("wednesday\n");
break;
case 5:printf("thursday\n");
break;
case 6:printf("friday\n");
break;
case 7:printf("saturday\n");
break;
default:printf("not valid!");

}


printf("Two day is:%d\n",day);
return 0;
}
