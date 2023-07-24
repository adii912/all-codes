#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
for(a=1;a<=4;a++)
{
    for(b=0;b<=4-a;b++)
    {
        printf("_");
    }
    for(c=1;c<=5-b;c++)
{
        printf("*");
    }
      printf("\n");

}


    getch();
}