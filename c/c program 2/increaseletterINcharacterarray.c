#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,j;
printf("Enter name ");
gets(a);

for(i=0;a[i]!='\0';i++)
{
    a[i]++;
}
puts(a);


    getch();
}