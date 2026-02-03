#include<stdio.h>

int main()
{
int count,i;
float weight,height;
count =0;

printf("Enter weight and height for 10 boys \n ");

for(i=1; i<=10; i++)
{
    scanf("%f %f",&weight,&height);
    if(weight<50 && height>100)
        count +=1;
}

printf("Number of boys weight <50 kg\n");
printf("Number of boys height >100 cm=%d\n",count);


return 0;
}
