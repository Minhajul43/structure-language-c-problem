#include<stdio.h>
// 2+4+6+.....+%d=
int main()
{
int i,N;
int sum=0;
printf("Enter the Number of N:");
scanf("%d",&N);
printf("\n 2+4+6+...+%d=",N);

for (i=1; i<=N; i+=2){
  sum+=i;
}
printf("%d",sum);
return 0;
}
