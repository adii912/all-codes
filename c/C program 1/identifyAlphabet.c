#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Enter the value");
scanf("%c",&ch);

if(ch>=65&&ch<=90)
printf(" capital letters");
else 
if(ch>97&&ch<=122)
printf(" \n small letters");
else  
if(ch>48&&ch<57)
printf("numbers");
else
printf("special ");
getch();





}