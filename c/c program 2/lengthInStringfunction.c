#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20],c[20];
int l,k;
printf("Enter 1st name ");
gets(a);
printf("Enter 2nd name ");
gets(b);

l=strlen(a);
printf("\n length a =%d ",l);

k=strlen(b);
printf("\n length b =%d ",k);

if (k>l)
printf("\n lenght b is greater  ");
else 
if (l>k)
printf(" length a is greater ");

}
