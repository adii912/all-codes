#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,i,r;

printf("Enter the number ");
scanf("\n %d",&a);
r=0;
while(a>0)
{
    i=a%10;
    r=r*10+i;
    a=a/10;
}
printf("/n %d",r);





    getch();
}