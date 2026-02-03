//constant using
#include<stdio.h>

int main()
{
const long  Roll  =230305043;
#define     Name  'Minhajul Islam'
const float Marks =75.5;
const char  Sex   ='Male';
const float Exp   =3.5E+3;

printf("\nRoll=%d",Roll);
printf("\nName=%c",Name);
printf("\nMarks=%.2f",Marks);
printf("\nSex=%c",Sex);
printf("\nExp=%e",Exp);
return 0;
}
