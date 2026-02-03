#include<stdio.h>
/* 1    2   3   4   5
   1    2   3   4
   1    2   3
   1    2
   1
*/
int main()
{
int i,j,N;

printf("\n Enter number of Row:");
scanf("%d",&N);
printf("Here is pramid series:\n");
for(i=N;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        printf("%5d",j);
    }
    printf("\n");
}


return 0;
}
