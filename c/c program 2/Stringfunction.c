#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20],c[20];
int l;
printf("Enter 1st name ");
gets(a);
printf("Enter 2nd name ");
gets(b);

strcat(a,b);
puts(a);
strlwr(a);
puts(a);
strupr(a);
puts(a);
strrev(a);
puts(a);

l=strlen(a);
printf("\n lenght = %d",l);

printf("\n Enter 3rd name ");
gets(c);

if( strcmp(b,c)==0)
printf("Equal");
else
printf("Not equal");





    getch();
}