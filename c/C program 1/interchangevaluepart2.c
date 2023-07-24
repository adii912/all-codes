#include<stdio.h>
#include<conio.h>
void main () 
{
int a,b,c,d;
printf("Enter any two digit number");
scanf("%d",&a);
b=a%10;
c=a/10;
d=b*10+c;
printf("\n result is %d",d);

getch();
}