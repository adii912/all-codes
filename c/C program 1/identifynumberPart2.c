#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter one numbers");
scanf("%d",&a);
(a<10? printf("%d is single digit number",a):
a<99? printf("%d is two digit number",a):
printf("%d is multiple",a));
getch();
}