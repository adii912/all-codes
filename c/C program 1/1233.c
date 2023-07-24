#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Enter the value");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
ch=ch+32;

else
if (ch>=97&&ch<=122)
ch=ch-32;

printf("\n %c",ch);
getch();



}