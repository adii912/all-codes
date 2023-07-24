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
    if(a[i]>=65&&a[i]<=90)
    a[i]=a[i]+32;
    else
    if(a[i]>=97&&a[i]<=122)
    a[i]=a[i]-32;

}
puts(a);







    getch();
}