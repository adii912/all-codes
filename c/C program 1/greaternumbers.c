#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d",&a);
printf("Enter two numbers:");
scanf("%d",&b);

if(a>b)
printf("%d is greater",a);
else
if (b>a)
printf("%d is greater",b);
else
printf("equal");
getch();



}