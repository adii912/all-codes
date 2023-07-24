#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,c;
for(a=1;a<=100;a++)
{
    c=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        c++;
    }
    if(c==2)
    printf(" \n %d is prime number ",a);
}
    
};