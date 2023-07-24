#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p,i,r;
p=&a;

printf("Enter number");
scanf("%d",p);

r=1;
for(i=1;i<=*p;i++) 
{
    r=r*i;
}
printf("\n %d",r);





    ;
}