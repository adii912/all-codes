#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
for(a=1;a<=5;a++)
{
    for(c=1;c<=a;c++)
    {
        printf("*");
    }
    for(b=1;b<=5-a;b++)
 {
        printf("  ");
    }
    for(c=1;c<=a;c++)
    {
        printf("*");

 }

      printf("\n");
}
    getch();
}