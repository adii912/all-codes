#include<stdio.h>
#include<conio.h>
void main () 
{
int a,b,c;
printf("enter the value of firs person");
scanf("%d",&a);
printf("Enter the value of secound person");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\n result is %d",a);
printf ("/n result is%d",b);
getch();
}