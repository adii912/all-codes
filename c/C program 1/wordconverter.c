#include<stdio.h>
#include<conio.h>
void main()
{
int a,ch;
printf("\n 1 \n 2 \n 3 \n 4 \n 5");
printf("Enter choice");
scanf("%d",&a);
switch (a)
{
case 1:
printf("one");
break;

case 2:
printf("two");
break;

case 3:
printf("three");
break;

case 4:
printf("four");
break;


case 5:
printf("five");
break;

default:
printf("Wrong choice");

}
getch();
}