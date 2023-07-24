#include<stdio.h>
#include<conio.h>
void main ()
{
int M,Hour,e;
printf("Enter the minute value");
scanf("%d",&M);
Hour=(M/60);
e=(M%60);
printf("\n result is %d",Hour);
printf("\n result is %d",e);
getch();




}