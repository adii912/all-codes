
#include<stdio.h>
#include<conio.h>
void main()
{
int b,r,f,h,R,C,ch;
printf("\n Enter base");
printf("\n Enter height");
printf("\n enter radius");
scanf("%d%d%d",&b,&h,&r);
printf("\n 1- area of traingle \n 2- area of rectangle \n 3- area of circle");
printf("Enter choice");
scanf("\n %d",&ch);
switch (ch)
{
case 1:
f=0.5*b*h;
printf("%d",f);
break;
case 2:
R=b*h;
printf("\n %d",R);
break;
case 3:
C=3.14*r*r;
printf("\n %d",C);
default:
printf("wrong choice");
}
getch();
}



