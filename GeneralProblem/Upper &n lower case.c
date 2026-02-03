#include<stdio.h>

int main()
{
char ch;

printf("Enter a chracter:");
scanf("%c",&ch);
if ("ch>='A'&&ch<'Z'"){
    printf("That is Upper case:  %c\n",ch);
}
else if("ch>='a'&&ch<'z'"){
    printf("that is a Lower case:  %c\n",ch);
}
else {
    printf("Not Valid this chracter");
}
return 0;
}
