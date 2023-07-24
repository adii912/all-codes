#include<stdio.h>
#include<conio.h>
void main()
{
int z,x,a,b,y;
char ch;
printf("Enter two numbers");
scanf("%d%d",&x,&y);
printf("\n A-addition \n S- substraction \n M - multiplication \n d- division ");
printf("\n Enter choice");
scanf("\n %c",&ch);
switch(ch)
{
case 'A':
z=x+y;
printf("\n result = %d",z);
break;

case 'S':
z=x-y;
printf(" \n result= %d",z);
break;

case 'M':
z=x*y;
printf("\n result = %d",z);
break;

case 'd':
z=x/y;
printf("\n result = %d",z);
break;

default:
printf("Wrong choice");

}

getch();
}