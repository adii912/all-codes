#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20],c[20];
int l;
printf("Enter the name ");
gets(a);
strcpy(b,a);
strrev(a);

if (strcmp(a,b)==0)
printf("palindrome");
else
printf("Non palindrome");
    ;
}