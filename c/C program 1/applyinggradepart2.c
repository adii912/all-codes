#include<stdio.h>
#include<conio.h>
void main()
{
int H,TS;
float CC;
printf("enter the value of Hardness");
scanf("%d",&H);
printf("Enter the value of tensile");
scanf("%d",&TS);
printf("Enter the value of carbon");
scanf("%f",&CC);
if(H>58&&CC<0.7&&TS>5800)
printf("\n grade 10");
else 
if(H>58&&CC<0.7&&TS<5800) 
printf("\n Grade 9");
else 
if(H>58&&CC>0.7&&TS>5800)
printf("\n Grade 8");
else 
if(H<58&&CC<0.7&&TS>5800)
printf("\n Grade 7");
else 
if(H>58||CC<0.7||TS>5800)
printf("\n Grade 6");
else
printf("\n Grade 5");

getch();



}