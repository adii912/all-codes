#include<stdio.h>
#include<conio.h>
void main ()
{
char a[10];
int j,i;
printf("Enter the name ");
gets(a);

j=0;
for(i=0;a[i]!='\0';i++)
{
    j++;
}
for(i=j;i>=0;i--)
{
    printf("%c",a[i]);
}


    getch();
}