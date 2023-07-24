#include<stdio.h>
#include<conio.h>
void main ()
{
char a[10];
int i,j;
printf("Enter the name ");
gets(a);

j=0;
for(i=0;a[i]!='\0';i++)
{
    j++;
}
printf("\n %d",i);



    getch();
}