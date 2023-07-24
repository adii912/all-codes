#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,j,k;
printf("Enter the name ");
gets(a);

j=0;
for(i=0;a[i]!='\0';i++)
{
    j++;
}
j--;
k=1;
for(i=0;a[i]!='\0';i++,j--)
{
    if(a[i]!=a[j])
    {
        k=0;
        break;
    }
}
if(k==1)
printf("palindrome");
else
printf("non palindroome");



    getch();
}