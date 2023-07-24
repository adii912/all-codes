#include<stdio.h>
#include<conio.h>
void main()
{
int a,ch;
printf("Enter number");
scanf("\n %d",&a);
printf("\n 1- odd or even \n 2- positive or negative \n 3- single or double or multiple ");
printf("Enter choice");
scanf("%d",&ch);
switch (ch)
{
case 1:

if(a%2==0)
printf("\n %d is even");
else
printf("\n is odd");
break;

case 2:
if(a>0)
printf("\n  is positive");
else
printf("\n  is negative");
break;

case 3:
if(a<10)
printf("\n is single digit number");
else 
if(a<99)
printf("\n %d is double digit number");
else 
printf("\n is multiple number");
break;

default:
printf("Wrong choice");

}
getch();
}