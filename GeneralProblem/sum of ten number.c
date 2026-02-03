
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//Using rand and ramdomize library function
int main(void)
{
int i,n,sum=0;
randomize();

printf("Enter Ten random number 0 to 99 \n");

for(i=0; i<10; i++)
{
    n=rand()%100;
    printf("%4d",n);
    sum +=n;
}
printf("\n sum of ten number is : %d",sum);

return 0;
}
