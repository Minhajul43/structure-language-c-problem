#include<stdio.h>
#include<conio.h>
main()
{
char $;

printf("Enter the alphabate:");
scanf("%c",&$);
if($>='a' && $<='z')
{
    printf("\n That is small number",$);
}
if($>='A' && $<='Z')
{
    printf("\n That is capital unmber",$);
}

return 0;
}
