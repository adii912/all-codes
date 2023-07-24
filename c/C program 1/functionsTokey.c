#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,ch;
printf("Enter two numbers ");
scanf("%d%d",&a,&b);
printf("\n1-add \n 2-sub \n 3- multiply ");
printf("Enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1 :
c=a+b;
printf("\n %d",c);
break;
case 2:
c=a-b;
printf("\n %d",c);
break;
case 3:
c=a*b;
printf("\n %d",c);
break;
default:
printf("wrong choice");
}
getch();
}