#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
char ch;
for(a=65;a<=69;a++)
{
    for(c=65;c<=a;c++)
    {
        printf("%c",c);
    }
    for(b=a;b<=68;b++)
    {
        printf("  ");
    }
    for(c=a;c>=65;c--)
    {
        printf("%c",c);
    }
    printf("\n");

}

    getch();
}