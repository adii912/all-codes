#include<stdio.h>
#include<conio.h>
void main()
{
int b,h,r,ch,T,R,C;
printf("\n 1- area of traingle \n 2- area of rectangle \n 3- area of circle");
printf("\n Enter choice");
scanf("\n %d",&ch);
switch (ch)
{
case 1:
printf("\n Enter base");
printf("\n Enter height");
scanf("%d%d",&b,&h);
T=0.5*b*h;
printf("%d",&T);
break;
case 2:
printf("\n Enter base");
printf("\n Enter height");
scanf("%d%d",&b,&h);
R=b*h;
printf("\n %d",&R);
break;

case 3:
printf("\n Enter radius");
scanf("\n %d",&r);
C=3.14*r*r;
printf("\n %d",&C);

break;
default:
printf("\n wrong choice");
}
getch();
}

