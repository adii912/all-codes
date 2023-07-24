#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("Enter the number ");
scanf("%d",&a);
c=0;
d=a;
while(a>0)
{
    b=a%10;
    c=c+b*b*b;
    a=a/10;
    
}
if(c==d)
printf("is amstrong number");
else
printf("not an amstrong number");

    getch();
}