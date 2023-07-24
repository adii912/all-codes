#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,*p,*q;
p=&a;
q=&b;
printf("Enter two numbers");
scanf("%d%d",p,q);

if(*p>*q)
printf("%d is greater",*p);
else 
if (*q>*p)
printf("%d is greater",*q);







    ;
}