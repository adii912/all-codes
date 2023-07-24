#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f;
printf("Enter five subject marks ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
c=(a+b+c+d+e);
f=(c/5);

if(f>70)
printf("\nA+");
else
if(f>60)
printf("\n b+");
else
if(f>50)
printf("\n c+");
else
printf("\n d+");

getch();



}