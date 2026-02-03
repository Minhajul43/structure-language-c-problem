// for loop-while loop-do while

/*#include<stdio.h>

int main()
{
int n;

printf("Enter the Number :");
scanf("%d",&n);
for(int i=0; i<=n; i++){
    printf("%d\n",i);
}


return 0;*/

/*#include<stdio.h>
int main()
{
int n;

printf("Enter the Number :");
scanf("%d",&n);
int i=0;
while(i<=n){
    printf("%d\t",i);
    i++;
}


return 0;
}
*/

#include<stdio.h>
int main()
{
int n;

printf("Enter the Number :");
scanf("%d",&n);
int i=0;
do{
    printf("%d\n",i);
    i++;
}while(i<=n);
return 0;
}


