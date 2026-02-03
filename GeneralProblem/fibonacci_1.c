
#include<stdio.h>

int main()
void displayFibonacci(int N)

{

int first=0,second=1,next;

printf("Here is a fibonacci series:");
for(i=0;i<=N;i++);
{
    if(i<=1)
    next =i;
    else{
        next=first+second;
        first = second;
        second =next;
    }
    printf("%d",next);
}
printf("\n");

}

int main()
printf("Enter the number:");
scanf("%d",&N);
if(N<=0){
    printf("Please enter a positive number.\n");

}
else{
    displayFibonacci(int N);
}
return 0;

}
