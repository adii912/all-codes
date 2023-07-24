#include<stdio.h>
#include<conio.h>
void disp(int x)
{
    if (x<=20)
    {
        printf("\n %d",x);
        x++;
        disp(x);
    }
}
void main ()
{
int a ;
a=1;
disp(a);
getch();
}