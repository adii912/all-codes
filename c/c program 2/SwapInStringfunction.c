#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20],c[20];
int l;
printf(" enter first name = ");
gets(a);
printf("Enter 2nd name = ");
gets(b);

strcpy(c,a);
strcpy(a,b);
strcpy(b,c);
puts(a);
puts(b);



    ;
}