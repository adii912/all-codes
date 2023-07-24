#include<stdio.h>
#include<conio.h>
int fact (int x)
{
    int z;
    if(x==1)
    return 1;
    else
    z=x  +  fact(x-1);
    return z;
}
void main ()
{
int a,b;
printf("Enter the number");
scanf("%d",&a);
b=fact(a);
printf("\n %d",b);
getch();
}