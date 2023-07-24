#include<stdio.h>
#include<conio.h>
void main()
{
    long int p,n,r,X;
    printf("enter the principle value");
    scanf("%d",&p);
    printf("enter the rate value");
    scanf("%d",&n);
    printf("enter year");
    scanf("%d",&r);
    X=p*n*r/100;
    printf("in result is %d",X);
    getch();
    
    
}