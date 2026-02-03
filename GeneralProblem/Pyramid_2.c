#include<stdio.h>

  /*        1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5
*/

int main()
{
int i,j,n,m;

printf("Enter many row you print? :");
scanf("%d",&n);

printf("Here is pyramid of number:\n");

for(i=1;i<=n;i++)
{
    for(j=1;j<=(n-i);j++)
    {
        printf("     ");
    }
    m=i;
    for(j=1;j<=i;j++)
    {
        printf("%5d",m++);
    }
    m-=2;
    for(j=1;j<i;j++)
    {
        printf("%5d",m--);
    }
    printf("\n");
}




return 0;
}
