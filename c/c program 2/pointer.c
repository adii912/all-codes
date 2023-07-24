#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a,b,c,*p,*q;
p=&a;
q=&b;
printf("Enter two numbers");
scanf("%d%d",p,q);
c=*p+*q; 
printf("\n %d",c);

    getch();
}