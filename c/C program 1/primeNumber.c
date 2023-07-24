#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the number ");
    scanf("%d",&b);
    d=a;
    c=0;
    for(a=1;a<=b;a++)
    {
        if(b%a==0)
        c++;
    }
    if(c==2)
     printf ("is the prime number");
     else
     printf(" not a prime  number ");

    getch();
}