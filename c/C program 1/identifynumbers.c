#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter one numbers");
scanf("%d",&a);
if(a<10)
printf("%d is single digit number",a);
else
if(a<99)
printf("%d is two digit number",a);
else 
printf("%d is multiple",a);
getch();



}